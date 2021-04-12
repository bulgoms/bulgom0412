#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	//문자
	//char c;
	//scanf("문자:%c\n", c);
	//에코기능이 있다
	//int c = getchar(); //문자입력 전용함수
	//putchar(c);//문자 출력 전용함수
	//
	//문자 입력 함수 :int getchar()
	//문자 출력 함수 : int putchar()
	// 
	// 
	//getch()함수 : 에코기능이 없음
	//cahr c = getch();
	//printf("입력문자");
	//putchar(c);

	//비밀번호를 입력하면 *이 출력
	
	//char pw[5];
	//printf("password?");
	//for (int i = 0; i < 4; i++) {
	//	pw[i] = getch(); //getch()함수 : 에코기능이 없음
	//	putchar('*');
	//}

	//pw[4] = '\0'; //문자열 끝 \0을 만나면 멈춤
	//printf("\n비밀번호:%s\n", pw);
	//
	//문자열
	//char s[] = "hello";
	//char s[6]; //배열의 이름은 주소 기본형은 주소를 넘겨야 하지만 char은 안해도 됨
	//scanf("%s", s); //공백처리 안됨
	//printf("%s\n", s);

	//문자열 전용함수
	//char name[20];
	//printf("이름은?");
	//gets(name); //공백처리 가능
	//printf("당신의 이름은"); puts(name);

	//문자열 전용함수
	//char name[10] = "choi";
	////name = "kim";//name이 choi라는 상수로 처리되어 있어서 kim을 넣을 수 없음
	//strcpy(name, "kim");

	//puts(name);


	//실습) 문자열을 입력 받고 그 문자열의 값과 길이와 주소값을 출력
	// call by reference - > strcpy()
	// call by value
	

	//피보나치의 수열 구하기
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