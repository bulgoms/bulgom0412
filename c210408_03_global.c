#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//전역변수: 프로그램 시작시 생성, 프로그램이 종료시 소멸
//어디서든 사용 가능
//자동초기화
//전역변수의 무분별한 선언은 신중해야 함 : 프로그램의 복잡도 증가, 메모리 증가
int g;

void test() {
	printf("a: %d\n", a);
	printf("g: %d\n", g);
}

int main() {
	//전역변수와 지역변수
	//지역변수 :함수가 시작될 때 생성, 함수 종료시 소멸
	//선언된 {}안에서만 사용가능
	int a= 10;

	printf("a: %d\n", a);
	//
	printf
}