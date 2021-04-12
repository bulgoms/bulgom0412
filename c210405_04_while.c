#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	//반복문 : while
	//1(True)이면 반복, 0(False)면 정지
	//int cnt = 0;

	//while (1) {
	//	printf("%d c!!!!\n", cnt);
	//	cnt += 1; // cnt = cnt + 1, cnt++
	//	if (cnt > 9) break;


	//}
	//1부터 10까지의 합

	//int i=0, sum=0;
	//
	//while (i<10) {
	//
	//	//printf("%d\n", ++i);
	//	sum += ++i; //sum = sum + i, i = i + 1
	//	
	//}
	//printf("합계:%d\n", sum);

	//실습) 합이 2000을 넘는 정수와 그 합을 구하기
	//1+2+3+.....+n>2000

	//int n = 0, sum = 0;
	//
	//while (sum < 2000) {
	//	sum += ++n;
	//}
	//printf("합계:%d, 정수:%d", sum, n);

	//실습) 1부터 20까지의 수 중 3의 배수만 출력
	
	//int a = 0;
	//printf("3의배수\n");
	//while (a < 21) {
	//	++a;
	//	if (a%3==0)
	//	printf("%d\n", a);
	//}
	
	
	//continue:조건이 참이면 명령문 처음으로 돌아감, 
	//1~10출력
	
	int a = 0;
	
	while (a < 10) {
		a++;
		if (a % 2 != 0) continue;//반복문 맨 처음으로 돌아감
		printf("%d", a);
	}
	

	return 0;
}