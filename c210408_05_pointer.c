#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�����ͺ���
	//int a = 10;
	//int* p = &a;

	//char c = '%';
	//char* p2 = &c;

	//printf("��:%c �ּ�:%p\n", c, &c);
	//printf("��:%c �ּ�:%p\n", *p2, p2);

	//double d = 3.14;
	//double* p3 = &d;

	//printf("��:%.2f �ּ�:%p\n", d, &d);
	//printf("��:%.2f �ּ�:%p\n", *p3, p3);


	//float f = 5.55;
	//float* p4 = &f;

	//printf("��:%lf �ּ�:%p\n", f, &f);
	//printf("��:%lf �ּ�:%p\n", *p4, p4);

	//�����ͺ��� p�� �̿��Ͽ� a�� ���� b�� ���� ���
	/*int a = 10, b = 20;
	int* p;
	
	p = &a;
	printf("a�� %d\n", *p);
	p = &b;
	printf("b�� %d\n", *p);*/

	//�ǽ�) a=10, b=20, c=30 �� �� base=100�� �� ������ ���غ���.
	//a b c �� ���� �� �� ������ ���� Ȱ��

	//int a = 10, b = 20, c = 30, base=100;
	//int* p = &a;

	//*p += base;
	//printf("%d\n", *p);

	//p = &b;
	//*p += base;

	//printf("")

	//�迭�� ������
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//int base = 100, sum=0;

	//for (int i = 0; i < 3; i++) {
	//	base += *(p + i);
	//	
	//	printf("%d\n", *(p + i));
	//}
	//  p�� ������ �̵����Ѽ� �����͸� �о� ���� ���.
	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d\n", *(p++), *arr);
	//	//p++;
	//}
	//for (int i = 0; i < 3; i++) {
	//	sum = base + *p;
	//	p++;
	//	printf("%d\n", sum);
	//}

	//�ǽ�) ������ �迭�� python�� �����ϰ� ������ ������ �̿�, �� ���ھ� ȭ�鿡 ���

	//char arr[6] = { 'p','y','t','h','o','n' };
	//char* p = arr;

	//for (int i = 0; i < 6; i++) {
	//	printf("%c\n", *(p++));
	//}

	//�Ǻ���ġ ������ �����͸� �̿��ؼ� ���
	//int fibo[20];
	//int* p = fibo;
	//*p = 0; p++;
	//*p = 1; p++;
	//for (int i = 2; i < 20; i++) {
	//	*p = *(p - 2) + *(p - 1);
	//	p++;
	//}

	//p = fibo;
	//for (int i = 0; i < 20; i++) {
	//	printf("%d ", *p);
	//	p++;
	//}



	return 0;
}