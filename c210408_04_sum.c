#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��������
//int sum;

//�Ű������� ������ �Է¹޾� �����ϴ� �Լ�
int usersum(int a) {
	//static ����
	//�Լ��� ���ʷ� ���� ���� �� ����, ���α׷� ����� �Ҹ�
	// ����� �Լ��ȿ����� ���� ����(���������� Ư¡)
	static int sum = 0;
	sum = sum + a;
	return sum;

}

//�Ű�����:����
//���ϰ�: �Լ��� ������ Ƚ��
//�Լ��̸� :countTest

int countTest() {
	static int cnt=0;
	cnt++;
	return cnt;
}

int main() {
	//��������,�������� ��뿹

	//printf("����:%d\n", usersum(10));
	//printf("����:%d\n", usersum(20));

	//�ݺ����� �̿��ؼ� �Լ��� 10�� ����
	//����Ƚ�� : 1 . .. . .... ����Ƚ�� : 10

	for (int  i=0; i < 11; i++) {
		printf("%d\n"\, countTest());
	}


	return 0;
}