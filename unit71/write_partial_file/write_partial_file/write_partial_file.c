#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fseek, rewind, fread, fclose 함수가 선언된 헤더 파일
#include <string.h>    // strlen, memset 함수가 선언된 헤더 파일

int main()
{
	char* s1 = "abcd";
	char buffer[20] = { 0, };

	FILE* fp = fopen("hello.txt", "r+");

	fseek(fp, 3, SEEK_SET);
	fwrite(s1, strlen(s1), 1, fp);

	rewind(fp);
	fread(buffer, 20, 1, fp);

	printf("%s\n", buffer);
	fclose(fp);

	return 0;
}