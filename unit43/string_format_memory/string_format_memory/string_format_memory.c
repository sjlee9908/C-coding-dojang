#define _CRT_SECURE_NO_WARNINGS    // sprintf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = malloc(sizeof(char) * 20);

	sprintf(s1, "Hello, %s", "world!");

	printf("%s", s1);

	free(s1);

	return 0;
}