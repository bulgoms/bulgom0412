#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//�Ű����� : ī��Ʈ�ٿ� �� �ð�(��)
//��ȯ�� : ����
//��� : ī��Ʈ �ٿ��� ���

void countdown(int a) {

	for (int i = a; i > -1; i--) {
		printf("%d\n", i);
		Sleep(1000);
	}
	
	printf("�߻�\n");
}


int main() {
	//ī��Ʈ �ٿ�
	//5�� �� �߻�
//	printf("ī��Ʈ ����\n");
//	for (int i = 5; i > -1; i--) {
//		Sleep(1000);//1000�� 1��
//		printf("%d\n", i);
//	}
//	printf("�߻�\n");
//

	int a;
	printf("�� �� �� �߻�? ");
	scanf("%d", &a);

	countdown(a);



	return 0;
}