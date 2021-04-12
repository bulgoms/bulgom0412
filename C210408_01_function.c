#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void voidTest() { //매개변수:X 반환값(void):X
	printf("void함수\n");
} //viodTest함수를 정의 main함수에 호출해야 사용 가능

void voidTest2(int a) {////매개변수:1 반환값(void):X
	//voidTest2라는 공간에 어떤 값을 
	//매개변수로 하나 받아서 a라는 이름으로 저장.
	printf("매개변수:%d\n", a);
}
void voidTest3(int a, int b) {

	printf("두 수의 합:%d\n", a + b);
}
//매개변수(double형)로 반지름을 받아서, 원의 넓이 출력.
//call by value 방식
void area(double r) {
	printf("원의넓이:%.2f", r * r * 3.14);
}
//return이 없으면 void를 사용해서 함수를 만들어도 되지만,
// 리턴값이 있다면 리턴 값이 나오는 형으로 함수를 만들어야함.
// 

//매개변수와 반환 값이 있는 함수
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area;//반환값은 무조건 1개
}

//세 정수를 매개변수로 입력 받아서 합을 반환하는 함수

int plus(int a, int b, int c) {
	int u = a + b + c;
	return u;
}
int add(int a, int b, int c) {
	return a + b + c;
}

//두 개의 정수를 매개변수로 받아서 나눈 실수값을 반환하는 함수

double division(double a, double b) {
	return a / b;
}

//두 수를 매개변수로 받아서 두 수 중 큰 수를 반환하는 함수
int more(int a, int b) {
	if (a > b)
		return a;
	else if (b > a)
		return b;
}


int main() { //진입점함수 밖에 함수를 만들어야함
	
	//함수
	//voidTest(); //매개변수:X 반환값(void):X
	//voidTest2(10); //매개변수 10을 a에 넘겨줘서 printf함.
	//voidTest3(10, 20);
	//area(3);
	//double r = 3.6;
	//double rValue = areaReturn(r);
	//printf("넓이:%.2f\n", rValue);
	//int a = 10, b = 20, c = 30;
	//int h = plus(a, b, c);
	//printf("합:%d\n", h);
	//printf("합계:%d\n", add(20, 30, 40));
	//double a=3, b=5;
	//printf("%.1f/%.1f=%.2f\n", a, b, division(a, b));

	printf("큰 수 :%d\n", more(65, 2));


	return 0;
}