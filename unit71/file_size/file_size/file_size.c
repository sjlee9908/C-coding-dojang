#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fseek, ftell, fclose 함수가 선언된 헤더 파일

int main()
{
	int size;
	FILE* fp = fopen("hello.txt", "r");

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);

	printf("%d\n", size);

	fclose(fp);

	return 0;
}