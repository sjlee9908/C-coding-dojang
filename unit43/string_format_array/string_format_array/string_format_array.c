#define _CRT_SECURE_NO_WARNINGS    // sprintf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // sprintf 함수가 선언된 헤더 파일

int main()
{
	char s1[20];

	sprintf(s1, "Hello, %s", "world");

	printf("%s\n", s1);

	return 0;
}