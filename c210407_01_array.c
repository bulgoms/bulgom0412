#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5

int main() {
	//�迭 : array
	//int arr[3];
	//arr[0] = 1; arr[1] = 2; arr[2] = 3;

	//printf("%d/%d/%d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr, sizeof(arr));
	

	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1)*10;
	//}
	////�ݺ����� �̿��ؼ� ���
	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", arr[i]);
	//}


	//�ǽ�)
	//�ݺ��� �̿��ؼ� ���
	//double arr[10];
	////�迭�� ũ�� ���ϱ�
	//int size = sizeof(arr) / sizeof(double);
	//printf("size:%d\n", size);

	////�ݺ����� �̿��ؼ� �ʱ�ȭ
	//for (int i = 0; i < size; i++) {
	//	arr[i] =i + 1.1;
	//}

	////�ݺ����� �̿��ؼ� ���
	//	for (int i = 0; i < size; i++) {

	//		printf("%.1f ", arr[i]);
	//}


	//������ �迭
	//char arr[] = { 'p','y','t','h','o','n' };

	//int size = sizeof(arr) / sizeof(char);
	//printf("%d\n", size);

	////for (int i = 0; i < size; i++) {
	////	arr[i] = i;
	////}
	//for (int i = 0; i < size; i++) {
	//	printf("%c",arr[i]);
	//}



	//�迭���� ��
	//a�� ���� �Ҵ�Ǵ� ������ ��Ÿ�ӽ�
	//LEN�� #define�� ���ǵ� ��ũ�� ���: ������ �Ǳ� ���� ��ü��
	//const int a=5// int �տ� const�� ���̸� a�� ����� �����Ǿ� �־ ������ �ȵ�
	//int arr[LEN], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	////printf("%d\n", size);



	////�Է� �ޱ�
	//for (int i = 0; i < size; i++) {
	//	printf("%d��° ������?",i+1);
	//	scanf("%d", &arr[i]);
	//}
	////����ϱ�
	//for (int i = 0; i < size; i++) {
	//	printf("%d\n%p\n", arr[i], &arr[i]);
	//}



	////�հ豸�Ͽ� ���
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("%d\n", sum);
	


	//�ǽ�) �� �л��� ������ �Է� �޾� ��ȣ��� �迭�� �����ϰ� 
	//		�� ��ȣ ������� ����ϴ� ���α׷�(���� �հ�, ��� ���)
	//      ���ϴ� �л� ��ȣ �Է��ϸ� �ش� �л� ���� ���
	int arr[LEN], sum=0;
	int size = sizeof(arr) / sizeof(int);

	
	for (int i = 0; i < size; i++) {
		printf("%d�� �л� ���� �Է�", i + 1);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	printf("���� �հ�:%d ���� ���:%.2f\n", sum, (double)sum/size);

	int a;
	char u;
	do {
		printf("�л���ȣ:");
		scanf("%d", &a);
		getchar();
		if (a < 1 || a>5) {
			printf("�ٽ��Է�");
			continue;//��� ����
		}

		printf("������:%d\n", arr[a - 1]);
		printf("���?(y/n)");
		scanf("%c", &u);
		getchar();
			

	} while (u != 'n');
	
	





	return 0;
}