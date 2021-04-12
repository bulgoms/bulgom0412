#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5

int main() {
	//배열 : array
	//int arr[3];
	//arr[0] = 1; arr[1] = 2; arr[2] = 3;

	//printf("%d/%d/%d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr, sizeof(arr));
	

	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1)*10;
	//}
	////반복문을 이용해서 출력
	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", arr[i]);
	//}


	//실습)
	//반복문 이용해서 출력
	//double arr[10];
	////배열의 크기 구하기
	//int size = sizeof(arr) / sizeof(double);
	//printf("size:%d\n", size);

	////반복문을 이용해서 초기화
	//for (int i = 0; i < size; i++) {
	//	arr[i] =i + 1.1;
	//}

	////반복문을 이용해서 출력
	//	for (int i = 0; i < size; i++) {

	//		printf("%.1f ", arr[i]);
	//}


	//문자형 배열
	//char arr[] = { 'p','y','t','h','o','n' };

	//int size = sizeof(arr) / sizeof(char);
	//printf("%d\n", size);

	////for (int i = 0; i < size; i++) {
	////	arr[i] = i;
	////}
	//for (int i = 0; i < size; i++) {
	//	printf("%c",arr[i]);
	//}



	//배열값의 합
	//a에 값이 할당되는 시점은 런타임시
	//LEN은 #define에 정의된 매크로 상수: 컴파일 되기 전에 대체됨
	//const int a=5// int 앞에 const를 붙이면 a가 상수로 고정되어 있어서 변경이 안됨
	//int arr[LEN], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	////printf("%d\n", size);



	////입력 받기
	//for (int i = 0; i < size; i++) {
	//	printf("%d번째 정수는?",i+1);
	//	scanf("%d", &arr[i]);
	//}
	////출력하기
	//for (int i = 0; i < size; i++) {
	//	printf("%d\n%p\n", arr[i], &arr[i]);
	//}



	////합계구하여 출력
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("%d\n", sum);
	


	//실습) 반 학생의 점수를 입력 받아 번호대로 배열에 저장하고 
	//		반 번호 순서대로 출력하는 프로그램(점수 합계, 평균 출력)
	//      원하는 학생 번호 입력하면 해당 학생 점수 출력
	int arr[LEN], sum=0;
	int size = sizeof(arr) / sizeof(int);

	
	for (int i = 0; i < size; i++) {
		printf("%d번 학생 점수 입력", i + 1);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	printf("점수 합계:%d 점수 평균:%.2f\n", sum, (double)sum/size);

	int a;
	char u;
	do {
		printf("학생번호:");
		scanf("%d", &a);
		getchar();
		if (a < 1 || a>5) {
			printf("다시입력");
			continue;//계속 진행
		}

		printf("점수는:%d\n", arr[a - 1]);
		printf("계속?(y/n)");
		scanf("%c", &u);
		getchar();
			

	} while (u != 'n');
	
	





	return 0;
}