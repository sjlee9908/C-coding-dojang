#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fseek, fread, fclose 함수가 선언된 헤더 파일
#include <string.h>    // memset 함수가 선언된 헤더 파일

int main()
{
	char buffer[10] = { 0, };

	FILE* fp = fopen("hello.txt", "r");
	
	fseek(fp, 2, SEEK_SET);
	fread(buffer, 3, 1, fp);

	printf("%s\n", buffer);

	memset(buffer, 0, 10);

	fseek(fp, 3, SEEK_CUR);
	fread(buffer, 4, 1, fp);

	printf("%s\n", buffer);

	fclose(fp);

	return 0;
}