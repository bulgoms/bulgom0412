#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//매개변수 : 카운트다운 할 시간(초)
//반환값 : 없음
//기능 : 카운트 다운을 출력

void countdown(int a) {

	for (int i = a; i > -1; i--) {
		printf("%d\n", i);
		Sleep(1000);
	}
	
	printf("발사\n");
}


int main() {
	//카운트 다운
	//5초 후 발사
//	printf("카운트 시작\n");
//	for (int i = 5; i > -1; i--) {
//		Sleep(1000);//1000이 1초
//		printf("%d\n", i);
//	}
//	printf("발사\n");
//

	int a;
	printf("몇 초 후 발사? ");
	scanf("%d", &a);

	countdown(a);



	return 0;
}