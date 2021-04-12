#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void arrayprint(int argc, char** argv) { // char** argv는 포인터의 포인터 char* argv[]와 같은 의미
	for (int i = 0; i < argc; i++) {     // argv[]는 배열인데, 배열은 곧 주소를 나타냄.
		printf("%s\n", argv[i]);
		
	}
}



int main() {
	//이차 문자열 배열의 매개변수
	
	//char str[2][7] = { "python", "c", "java" }; //[2]안의 2는 생략 가능

	//포인터의 배열
	//char* p[3] = { "python", "c", "java" }; //선언을 안해도 됨, (*p)[]가 아니라서 포인터가 3개라는 의미.  

	//다차원 배열의 포인터..?
	//char arr[][7] = { "python", "c", "java" };
	//char(*p)[7] = arr;

	char* p[3] = { "python", "c", "java" };
	printf("%p %p %p\n", p[0], p[1], p[2]);

	//함수로 처리
	//for (int i = 0; i < 3; i++) {
	//	printf("%s\n", p[i]);
	//	
	//}
	arrayprint(3, p);
	


	return 0;
}