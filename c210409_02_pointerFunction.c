#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//�Լ� : call by refrence
//���� �ѱ�� �� call by value.
//�ּ�(������)�� �ѱ�� �� call by refrence.
//call by refrence�� main�Լ��� a �� ������ ����
void change(int* p) {
	*p = 20;
}


void twoChange(int*a,int*b) {
	int c = *a;
	*a = *b;
	*b = c;
}


void sumCal(int*pa,int*psum) {
	*psum += *pa;

}


int main() {
	//�Լ��� ������ �ѱ��
	//int a = 10;
	//
	//change(&a);
	//
	//scanf("%d", &a);
	//printf("a: %d\n", a);

	//�� �� �ٲٱ�
	//int a = 10, b = 20;
	//twoChange(&a, &b);
	//printf("%d %d\n", a, b);

	//�ݺ����� �̿��ؼ� �Է¹��� ���� ����
	//�Լ����� ����

	int a, sum = 0;
	while (1) {
		scanf("%d", &a);
		sumCal(&a, &sum);
		printf("�����հ�:%d\n", sum);
	}
	
	



	return 0;
}
