#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//조건식이 참일때 수행할 문장이 거짓일때 수행문장을 구별
	//if (조건문) {
	//	참일때 수행할 문장} else { 거짓일때 수행할 문장
	//}
	//예제) 
/*	int a, b;
	printf("비교할 두 수를 입력하세요");
	scanf("%d %d", &a, &b);

	if (a > b)
		printf("%d이(가) %d보다 크다", a, b);

	else if (b > a)
		printf("%d이(가) %d보다 크다", b, a);

	else
		printf("%d은(는) %d와(과) 같다", a, b);
	*/

	//실습) 학생의 점수를 입력 받아 학점을 출력하는 프로그램 작성
		//90 이상 A, 80이상 B, 70이상 C, 60이상 D, 60미안 F

		//int a;
		//printf("점수를 입력하시오");
		//scanf("%d", &a);

		//if (a > 100 || a < 0)
		//	printf("잘못된 점수");
		//else if(a>=90)
		//	printf("A");

		//else if (a >= 80)
		//	printf("B");

		//else if (a >= 70)
		//	printf("C");

		//else if (a >= 60)
		//	printf("D");

		//else if (a < 60)
		//	printf("F");
		//else
		//	printf("잘못된점수입니다.");



		//실습) 학생의 국영수 점수를 입력받아 총저미과 평균을 출력
		//(60미만 점수가 있으면 과락)
		//int a, b, c;
		//printf("점수입력 국어 영어 수학");
		//scanf("%d%d%d", &a, &b, &c);
		//int g = a + b + c;
		//
		//
		//if (a < 61 || b < 61 || c < 61)
		//	printf("과락\n");
		//else
		//	printf("통과\n 합계:%d 평균:%.2f\n", g, (float)g / 3);


		//실습) 윤년 구하기
		//1. 4년마다 29일 2.100년 마다 28일 3.400년 29

		//int year;
		//printf("년도입력yyyy:");
		//scanf("%d", &year);

		//if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		//	printf("윤년");
		//else
		//	printf("윤년 아님");
		//



		//실습)보기 메뉴를 보고 음식을 선택하면 가야 할 코너를 알려주는 프로그램 작성
		//1자장면 2짬뽕 3설렁탕 4비빔밥 5피자 6스파게티
		//메뉴를 선택:3
		//한식코너로 가세요
		//12중식 34한식 56양식

	int a;
	printf("메뉴를 선택하세요\n1.자장면\n2.짬뽕\n3.설렁탕\n4.비빔밥\n5.피자\n6.스파게티\n번호입력:");

	scanf("%d", &a);

	if (a == 1 || a == 2)
		printf("중식코너로가세요");
	else if (a == 3 || a == 4)
		printf("한식코너로 가세요");
	else if (a == 5 || a == 6)
		printf("양식코너로 가세요");
	else
		printf("잘못된 번호입니다");



	return 0;
}