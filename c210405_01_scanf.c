#define _CRT_SECURE_NO_WARNINGS //scanf�Լ��� ����ϱ� ���� ó�� ����
#include <stdio.h>

int main() {
	//�Է��Լ�
	
	//1. ������ �Է¹ޱ�
	//int a;

	//printf("���ϴ� ����?");
	//scanf("%d", &a); //&�� a�� �ּҸ� �ǹ���
	////printf("�Է��� �� %d\n", a);
	//printf("�Է��� �� :%d �ּ�:%p\n", a, &a);

	//2. �Ǽ��� �Է¹ޱ�
	//float f;
	//double d;
	//
	//printf("float �Ǽ���?");	
	//scanf("%f",&f);
	//printf("double �Ǽ���?");
	//scanf("%lf",&d); //���乮�� bouble�� ��� : %lf
	//printf("�Է°��� �ּ�\n%.2f\n%p\n%f\n%p\n", f,&f,d,&d);


	//3.������ �Է¹ޱ�
	//char c;
	//printf("���ڴ�?");
	//scanf("%c", &c);
	//printf("�Է��� ���� %c\n", c);

	//�ǽ�) �� ���� �Է� �޾Ƽ� �հ� ���

	//int a, b;
	//printf("ù��° ���� �Է�");
	//scanf("%d", &a);
	//printf("�ι�° ���� �Է�");
	//scanf("%d", &b);
	//printf("�� ���� ���� %d", a + b);

	//�ǽ�) ������ ��¥ �Է�(�����)�� �Է� �޾� ���
	//int year, month, day;

	//printf("�⵵ �� ��¥");
	//scanf("%d %d %d", &year, &month, &day);
	//printf("������ ��¥: %d��%d��%d��", year, month, day);


	//�ǽ�) �� ���� ������ �Է¹޾� ��������� ���غ��ÿ�
	//int a, b;
	//printf("�� ���� �Է��Ͻÿ�");
	//scanf("%d %d", &a, &b);
	//printf("%d + %d = %d\n", a, b, a + b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d / %d = %f\n", a, b, (double)a / b);

	//���� �Է�
	//int a, b;
	//char sign;
	//printf("������?"); //10 + 20�� �Է¹ް� ���� ��.
	//scanf("%d%c%d", &a, &sign, &b);
	//printf("%d %c %d\n", a, sign, b);
	//
	//�ǽ�) �Ž��� �� ��� ������ �ڿ� ������ ��� ����.
	//int amount, pay;
	//printf("���ǰ�");
	//scanf("%d", &amount);
	//printf("������ ��");
	//scanf("%d", &pay);
	//amount > pay ?
	//	printf("���� �����մϴ�\n ������ �ݾ�:%d", pay - amount) :
	//	pay > amount ? printf("��� �Ǿ����ϴ�\n �Ž�����:%d", pay - amount) : printf("����Ϸ�");

	//�ǽ�) ����, ����, ���� ������ �Է� �޾� �հ� ��� ���ϱ�
	//int a, b, c;

	//
	//printf("���� ������?");
	//scanf("%d", &a);
	//printf("���� ������?");
	//scanf("%d", &b);
	//printf("���� ������?");
	//scanf("%d", &c);

	//int g = a + b + c;

	//printf("�� ���� �հ�:%d\n��� ������:%.2f", g, (float)g/3);

	//�ǽ�) rgb�� �����
	int r, g, b;
	printf("red?"); scanf("%d", &r);
	printf("green?"); scanf("%d", &g);
	printf("blue?"); scanf("%d", &b);
	unsigned int rgb = r << 16 | g << 8 | b;
	printf("RGB: %0X\n", rgb);






	return 0;
}