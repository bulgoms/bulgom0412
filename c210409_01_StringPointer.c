#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���ڿ��� ������

	//char str[] = "happy";
	////str = "angry";// str�� ����� ������ �ȵ�
	//char* p = str;
	//printf("%s\n", p);
	//p = "python"; // str�� ������ ������ �س��� ���� ����
	//puts(p); //���ڿ� ���� ����Լ�

	char name[99];
	char* p = name;

	do {
		printf("�̸��� �Է��ϼ���:");
		gets(p, sizeof(name));
		puts(p);
		printf("%s�� ȯ���մϴ�.\n", p);

	} while (name[0] != 'q');

	



	return 0;
}