#define _CRT_SECURE_NO_WARNINGS    // sprintf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // sprintf 함수가 선언된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
	char* s1 = malloc(sizeof(char) * 30);

	sprintf(s1, "%c %d %f %e", 'a', 10, 3.2f, 1.123456e-21f);

	printf("%s", s1);

	free(s1);
	return 0;
}