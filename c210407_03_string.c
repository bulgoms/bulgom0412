#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	//����
	//char c;
	//scanf("����:%c\n", c);
	//���ڱ���� �ִ�
	//int c = getchar(); //�����Է� �����Լ�
	//putchar(c);//���� ��� �����Լ�
	//
	//���� �Է� �Լ� :int getchar()
	//���� ��� �Լ� : int putchar()
	// 
	// 
	//getch()�Լ� : ���ڱ���� ����
	//cahr c = getch();
	//printf("�Է¹���");
	//putchar(c);

	//��й�ȣ�� �Է��ϸ� *�� ���
	
	//char pw[5];
	//printf("password?");
	//for (int i = 0; i < 4; i++) {
	//	pw[i] = getch(); //getch()�Լ� : ���ڱ���� ����
	//	putchar('*');
	//}

	//pw[4] = '\0'; //���ڿ� �� \0�� ������ ����
	//printf("\n��й�ȣ:%s\n", pw);
	//
	//���ڿ�
	//char s[] = "hello";
	//char s[6]; //�迭�� �̸��� �ּ� �⺻���� �ּҸ� �Ѱܾ� ������ char�� ���ص� ��
	//scanf("%s", s); //����ó�� �ȵ�
	//printf("%s\n", s);

	//���ڿ� �����Լ�
	//char name[20];
	//printf("�̸���?");
	//gets(name); //����ó�� ����
	//printf("����� �̸���"); puts(name);

	//���ڿ� �����Լ�
	//char name[10] = "choi";
	////name = "kim";//name�� choi��� ����� ó���Ǿ� �־ kim�� ���� �� ����
	//strcpy(name, "kim");

	//puts(name);


	//�ǽ�) ���ڿ��� �Է� �ް� �� ���ڿ��� ���� ���̿� �ּҰ��� ���
	// call by reference - > strcpy()
	// call by value
	

	//�Ǻ���ġ�� ���� ���ϱ�
	//0 1 1 2 3 5 8 13 .....
	int fibo[20];
	fibo[0] = 0; fibo[1] = 1;
	
	for (int i = 2; i < 20; i++) {
		fibo[i] = fibo[i - 2] + fibo[i - 1];
		
	}	
	for (int i = 0; i < 20; i++) {
		printf("%d ", fibo[i]);
	}
	
	



	
	return 0;

	
}