#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//선택조건문 : switch ~ case
	//int a = 1;
	//switch (a) {
	//case 0:
	//	printf("zero\n");
	//case 1:
	//	printf("one\n");
	//case 2:
	//	printf("two\n");
	//default:
	//	printf("잘못된 숫자");

	//}
	//월의 마지막날 출력
	//int mon =12;
	//switch (mon) {
	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:
	//	printf("31일"); break;
	//case 2:
	//	printf("28일"); break;
	//
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	printf("30일"); break;
	//
	//default:
	//	printf("잘못된 날짜");
	//}

	int a;
	printf("메뉴를 선택하세요\n1.자장면\n2.짬뽕\n3.설렁탕\n4.비빔밥\n5.피자\n6.스파게티\n번호입력:");

	scanf("%d", &a);

	switch (a) {
	case 1:
	case 2:
		printf("중식코너"); break;
	case 3:
	case 4:
		printf("한식코너"); break;
	case 5:
	case 6:
		printf("양식코너"); break;
	default:
		printf("잘못입력하셨습니다.");

	}

	return 0;
}