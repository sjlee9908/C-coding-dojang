#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

int main()
{
	char* s1 = "Hello";
	char* s2="";

	strcpy(s2, s1);

	printf("%s\n", s2);

	return 0;
}