#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//포인터변수
	//int a = 10;
	//int* p = &a;

	//char c = '%';
	//char* p2 = &c;

	//printf("값:%c 주소:%p\n", c, &c);
	//printf("값:%c 주소:%p\n", *p2, p2);

	//double d = 3.14;
	//double* p3 = &d;

	//printf("값:%.2f 주소:%p\n", d, &d);
	//printf("값:%.2f 주소:%p\n", *p3, p3);


	//float f = 5.55;
	//float* p4 = &f;

	//printf("값:%lf 주소:%p\n", f, &f);
	//printf("값:%lf 주소:%p\n", *p4, p4);

	//포인터변수 p를 이용하여 a의 값과 b의 값을 출력
	/*int a = 10, b = 20;
	int* p;
	
	p = &a;
	printf("a는 %d\n", *p);
	p = &b;
	printf("b는 %d\n", *p);*/

	//실습) a=10, b=20, c=30 일 때 base=100을 각 변수에 더해보자.
	//a b c 에 접근 할 때 포인터 변수 활용

	//int a = 10, b = 20, c = 30, base=100;
	//int* p = &a;

	//*p += base;
	//printf("%d\n", *p);

	//p = &b;
	//*p += base;

	//printf("")

	//배열의 포인터
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//int base = 100, sum=0;

	//for (int i = 0; i < 3; i++) {
	//	base += *(p + i);
	//	
	//	printf("%d\n", *(p + i));
	//}
	//  p를 옆으로 이동시켜서 데이터를 읽어 오는 방법.
	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d\n", *(p++), *arr);
	//	//p++;
	//}
	//for (int i = 0; i < 3; i++) {
	//	sum = base + *p;
	//	p++;
	//	printf("%d\n", sum);
	//}

	//실습) 문자형 배열에 python을 저장하고 포인터 변수를 이용, 한 글자씩 화면에 출력

	//char arr[6] = { 'p','y','t','h','o','n' };
	//char* p = arr;

	//for (int i = 0; i < 6; i++) {
	//	printf("%c\n", *(p++));
	//}

	//피보나치 수열을 포인터를 이용해서 출력
	//int fibo[20];
	//int* p = fibo;
	//*p = 0; p++;
	//*p = 1; p++;
	//for (int i = 2; i < 20; i++) {
	//	*p = *(p - 2) + *(p - 1);
	//	p++;
	//}

	//p = fibo;
	//for (int i = 0; i < 20; i++) {
	//	printf("%d ", *p);
	//	p++;
	//}



	return 0;
}