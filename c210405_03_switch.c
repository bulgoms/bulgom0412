#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�������ǹ� : switch ~ case
	//int a = 1;
	//switch (a) {
	//case 0:
	//	printf("zero\n");
	//case 1:
	//	printf("one\n");
	//case 2:
	//	printf("two\n");
	//default:
	//	printf("�߸��� ����");

	//}
	//���� �������� ���
	//int mon =12;
	//switch (mon) {
	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:
	//	printf("31��"); break;
	//case 2:
	//	printf("28��"); break;
	//
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	printf("30��"); break;
	//
	//default:
	//	printf("�߸��� ��¥");
	//}

	int a;
	printf("�޴��� �����ϼ���\n1.�����\n2.«��\n3.������\n4.�����\n5.����\n6.���İ�Ƽ\n��ȣ�Է�:");

	scanf("%d", &a);

	switch (a) {
	case 1:
	case 2:
		printf("�߽��ڳ�"); break;
	case 3:
	case 4:
		printf("�ѽ��ڳ�"); break;
	case 5:
	case 6:
		printf("����ڳ�"); break;
	default:
		printf("�߸��Է��ϼ̽��ϴ�.");

	}

	return 0;
}