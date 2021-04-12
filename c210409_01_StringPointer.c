#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//문자열의 포인터

	//char str[] = "happy";
	////str = "angry";// str은 상수라서 변경이 안됨
	//char* p = str;
	//printf("%s\n", p);
	//p = "python"; // str을 포인터 지정을 해놔서 변경 가능
	//puts(p); //문자열 전용 출력함수

	char name[99];
	char* p = name;

	do {
		printf("이름을 입력하세요:");
		gets(p, sizeof(name));
		puts(p);
		printf("%s님 환영합니다.\n", p);

	} while (name[0] != 'q');

	



	return 0;
}