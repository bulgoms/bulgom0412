#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void voidTest() { //�Ű�����:X ��ȯ��(void):X
	printf("void�Լ�\n");
} //viodTest�Լ��� ���� main�Լ��� ȣ���ؾ� ��� ����

void voidTest2(int a) {////�Ű�����:1 ��ȯ��(void):X
	//voidTest2��� ������ � ���� 
	//�Ű������� �ϳ� �޾Ƽ� a��� �̸����� ����.
	printf("�Ű�����:%d\n", a);
}
void voidTest3(int a, int b) {

	printf("�� ���� ��:%d\n", a + b);
}
//�Ű�����(double��)�� �������� �޾Ƽ�, ���� ���� ���.
//call by value ���
void area(double r) {
	printf("���ǳ���:%.2f", r * r * 3.14);
}
//return�� ������ void�� ����ؼ� �Լ��� ���� ������,
// ���ϰ��� �ִٸ� ���� ���� ������ ������ �Լ��� ��������.
// 

//�Ű������� ��ȯ ���� �ִ� �Լ�
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area;//��ȯ���� ������ 1��
}

//�� ������ �Ű������� �Է� �޾Ƽ� ���� ��ȯ�ϴ� �Լ�

int plus(int a, int b, int c) {
	int u = a + b + c;
	return u;
}
int add(int a, int b, int c) {
	return a + b + c;
}

//�� ���� ������ �Ű������� �޾Ƽ� ���� �Ǽ����� ��ȯ�ϴ� �Լ�

double division(double a, double b) {
	return a / b;
}

//�� ���� �Ű������� �޾Ƽ� �� �� �� ū ���� ��ȯ�ϴ� �Լ�
int more(int a, int b) {
	if (a > b)
		return a;
	else if (b > a)
		return b;
}


int main() { //�������Լ� �ۿ� �Լ��� ��������
	
	//�Լ�
	//voidTest(); //�Ű�����:X ��ȯ��(void):X
	//voidTest2(10); //�Ű����� 10�� a�� �Ѱ��༭ printf��.
	//voidTest3(10, 20);
	//area(3);
	//double r = 3.6;
	//double rValue = areaReturn(r);
	//printf("����:%.2f\n", rValue);
	//int a = 10, b = 20, c = 30;
	//int h = plus(a, b, c);
	//printf("��:%d\n", h);
	//printf("�հ�:%d\n", add(20, 30, 40));
	//double a=3, b=5;
	//printf("%.1f/%.1f=%.2f\n", a, b, division(a, b));

	printf("ū �� :%d\n", more(65, 2));


	return 0;
}