#define _CRT_SECURE_NO_WARNINGS //scanf함수를 사용하기 위한 처리 과정
#include <stdio.h>

int main() {
	//입력함수
	
	//1. 정수형 입력받기
	//int a;

	//printf("원하는 값은?");
	//scanf("%d", &a); //&은 a의 주소를 의미함
	////printf("입력한 값 %d\n", a);
	//printf("입력한 값 :%d 주소:%p\n", a, &a);

	//2. 실수형 입력받기
	//float f;
	//double d;
	//
	//printf("float 실수는?");	
	//scanf("%f",&f);
	//printf("double 실수는?");
	//scanf("%lf",&d); //포멧문자 bouble일 경우 : %lf
	//printf("입력값과 주소\n%.2f\n%p\n%f\n%p\n", f,&f,d,&d);


	//3.문자형 입력받기
	//char c;
	//printf("문자는?");
	//scanf("%c", &c);
	//printf("입력한 값은 %c\n", c);

	//실습) 두 정수 입력 받아서 합계 출력

	//int a, b;
	//printf("첫번째 정수 입력");
	//scanf("%d", &a);
	//printf("두번째 정수 입력");
	//scanf("%d", &b);
	//printf("두 수의 합은 %d", a + b);

	//실습) 오늘의 날짜 입력(년월일)를 입력 받아 출력
	//int year, month, day;

	//printf("년도 월 날짜");
	//scanf("%d %d %d", &year, &month, &day);
	//printf("오늘의 날짜: %d년%d월%d일", year, month, day);


	//실습) 두 개의 정수를 입력받아 산술연산을 구해보시오
	//int a, b;
	//printf("두 수를 입력하시오");
	//scanf("%d %d", &a, &b);
	//printf("%d + %d = %d\n", a, b, a + b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d / %d = %f\n", a, b, (double)a / b);

	//계산식 입력
	//int a, b;
	//char sign;
	//printf("계산식은?"); //10 + 20을 입력받고 싶을 때.
	//scanf("%d%c%d", &a, &sign, &b);
	//printf("%d %c %d\n", a, sign, b);
	//
	//실습) 거스릅 돈 계산 연산자 뒤에 연산자 사용 가능.
	//int amount, pay;
	//printf("물건값");
	//scanf("%d", &amount);
	//printf("지불한 값");
	//scanf("%d", &pay);
	//amount > pay ?
	//	printf("돈이 부족합니다\n 부족한 금액:%d", pay - amount) :
	//	pay > amount ? printf("계산 되었습니다\n 거스릅돈:%d", pay - amount) : printf("정산완료");

	//실습) 국어, 영어, 수학 점수를 입력 받아 합계 평균 구하기
	//int a, b, c;

	//
	//printf("국어 점수는?");
	//scanf("%d", &a);
	//printf("영어 점수는?");
	//scanf("%d", &b);
	//printf("수학 점수는?");
	//scanf("%d", &c);

	//int g = a + b + c;

	//printf("세 점수 합계:%d\n평균 점수는:%.2f", g, (float)g/3);

	//실습) rgb값 만들기
	int r, g, b;
	printf("red?"); scanf("%d", &r);
	printf("green?"); scanf("%d", &g);
	printf("blue?"); scanf("%d", &b);
	unsigned int rgb = r << 16 | g << 8 | b;
	printf("RGB: %0X\n", rgb);






	return 0;
}