#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//������ �迭
	int arr[2][3]; //2�� 3��¥�� arr�� ����
	//arr[0][0] = 1;	arr[0][1] = 2;
	//arr[0][2] = 3;	arr[1][0] = 4;
	//arr[1][1] = 5;	arr[1][2] = 6; //�� i=0~1�ݺ� �� j=0~2�ݺ�

	//for (int i = 0; i < 3; i++) { //��
	//	for (int j = 0; j < 3; j++) {//��
	//		arr[i][j] =3*i + j+1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}
	
	//int rsize = sizeof(arr) / sizeof(arr[0]);
	//int csize = sizeof(arr[0]) / sizeof(int);
	//int sum = 0;


	//�ǽ�) �л����� ��/��/�� ����


	for (int i = 0; i < 2; i++) {
		printf("%d)��������?", i+1);
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("-----------------\n");
		//�հ�, ��� ���
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		
		for (int j = 0; j < 3; j++) {
			sum += arr[i][j];
		}
		printf("%d)������ �հ�:%d ���:%.2f\n",i+1, sum, (double)sum/3);
		sum = 0;
	
	}

	//�� ���� �հ�, ���
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