#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//다차원 배열
	int arr[2][3]; //2행 3열짜리 arr을 만듬
	//arr[0][0] = 1;	arr[0][1] = 2;
	//arr[0][2] = 3;	arr[1][0] = 4;
	//arr[1][1] = 5;	arr[1][2] = 6; //행 i=0~1반복 열 j=0~2반복

	//for (int i = 0; i < 3; i++) { //행
	//	for (int j = 0; j < 3; j++) {//열
	//		arr[i][j] =3*i + j+1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}
	
	//int rsize = sizeof(arr) / sizeof(arr[0]);
	//int csize = sizeof(arr[0]) / sizeof(int);
	//int sum = 0;


	//실습) 학생들의 국/영/수 점수


	for (int i = 0; i < 2; i++) {
		printf("%d)국영수는?", i+1);
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("-----------------\n");
		//합계, 평균 출력
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		
		for (int j = 0; j < 3; j++) {
			sum += arr[i][j];
		}
		printf("%d)국영수 합계:%d 평균:%.2f\n",i+1, sum, (double)sum/3);
		sum = 0;
	
	}

	//각 과목 합계, 평균
	printf("*********************\n");
	
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 2; i++) {
			sum += arr[i][j];
		}
		
			sum = 0;
		}
	
	
		
	}
	
	



	return 0;
}