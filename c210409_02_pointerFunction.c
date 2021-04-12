#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//함수 : call by refrence
//값을 넘기는 건 call by value.
//주소(포인터)를 넘기는 건 call by refrence.
//call by refrence는 main함수의 a 값 변경이 가능
void change(int* p) {
	*p = 20;
}


void twoChange(int*a,int*b) {
	int c = *a;
	*a = *b;
	*b = c;
}


void sumCal(int*pa,int*psum) {
	*psum += *pa;

}


int main() {
	//함수에 포인터 넘기기
	//int a = 10;
	//
	//change(&a);
	//
	//scanf("%d", &a);
	//printf("a: %d\n", a);

	//두 수 바꾸기
	//int a = 10, b = 20;
	//twoChange(&a, &b);
	//printf("%d %d\n", a, b);

	//반복문을 이용해서 입력받은 값을 누적
	//함수에서 누적

	int a, sum = 0;
	while (1) {
		scanf("%d", &a);
		sumCal(&a, &sum);
		printf("누적합계:%d\n", sum);
	}
	
	



	return 0;
}
