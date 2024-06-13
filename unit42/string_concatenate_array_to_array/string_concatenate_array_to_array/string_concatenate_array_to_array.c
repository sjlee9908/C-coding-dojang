#define _CRT_SECURE_NO_WARNINGS    // strcat 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcat 함수가 선언된 헤더 파일

int main()
{
	char s1[10] = "world";
	char s2[20] = "Hello";

	strcat(s2, s1);

	printf("%s", s2);

	return 0;
}