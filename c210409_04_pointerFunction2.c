#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void arrayprint(int argc, char** argv) { // char** argv�� �������� ������ char* argv[]�� ���� �ǹ�
	for (int i = 0; i < argc; i++) {     // argv[]�� �迭�ε�, �迭�� �� �ּҸ� ��Ÿ��.
		printf("%s\n", argv[i]);
		
	}
}



int main() {
	//���� ���ڿ� �迭�� �Ű�����
	
	//char str[2][7] = { "python", "c", "java" }; //[2]���� 2�� ���� ����

	//�������� �迭
	//char* p[3] = { "python", "c", "java" }; //������ ���ص� ��, (*p)[]�� �ƴ϶� �����Ͱ� 3����� �ǹ�.  

	//������ �迭�� ������..?
	//char arr[][7] = { "python", "c", "java" };
	//char(*p)[7] = arr;

	char* p[3] = { "python", "c", "java" };
	printf("%p %p %p\n", p[0], p[1], p[2]);

	//�Լ��� ó��
	//for (int i = 0; i < 3; i++) {
	//	printf("%s\n", p[i]);
	//	
	//}
	arrayprint(3, p);
	


	return 0;
}