#define _CRT_SECURE_NO_WARNINGS    // strcpy, strcat 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy, strcat 함수가 선언된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
	char s1[10] = "world";
	char* s2 = malloc(sizeof(char) * 20);

	strcpy(s2, "Hello");

	strcat(s2, s1);

	printf("%s", s2);

	free(s2);
	return 0;
}