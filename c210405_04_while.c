#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	//�ݺ��� : while
	//1(True)�̸� �ݺ�, 0(False)�� ����
	//int cnt = 0;

	//while (1) {
	//	printf("%d c!!!!\n", cnt);
	//	cnt += 1; // cnt = cnt + 1, cnt++
	//	if (cnt > 9) break;


	//}
	//1���� 10������ ��

	//int i=0, sum=0;
	//
	//while (i<10) {
	//
	//	//printf("%d\n", ++i);
	//	sum += ++i; //sum = sum + i, i = i + 1
	//	
	//}
	//printf("�հ�:%d\n", sum);

	//�ǽ�) ���� 2000�� �Ѵ� ������ �� ���� ���ϱ�
	//1+2+3+.....+n>2000

	//int n = 0, sum = 0;
	//
	//while (sum < 2000) {
	//	sum += ++n;
	//}
	//printf("�հ�:%d, ����:%d", sum, n);

	//�ǽ�) 1���� 20������ �� �� 3�� ����� ���
	
	//int a = 0;
	//printf("3�ǹ��\n");
	//while (a < 21) {
	//	++a;
	//	if (a%3==0)
	//	printf("%d\n", a);
	//}
	
	
	//continue:������ ���̸� ��ɹ� ó������ ���ư�, 
	//1~10���
	
	int a = 0;
	
	while (a < 10) {
		a++;
		if (a % 2 != 0) continue;//�ݺ��� �� ó������ ���ư�
		printf("%d", a);
	}
	

	return 0;
}