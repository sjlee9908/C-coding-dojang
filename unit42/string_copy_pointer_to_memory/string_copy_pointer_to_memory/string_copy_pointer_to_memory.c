#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 정의된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
	char* s1 = "hello";
	char* s2 = malloc(sizeof(char) * 10);

	strcpy(s2, s1);

	printf("%s", s2);

	free(s2);
	return 0;;
}