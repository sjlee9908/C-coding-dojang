#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>      // fopen, fread, fclose 함수가 선언된 헤더 파일

int main() {
	char buffer[20] = { 0, };
	FILE* fp = fopen("hello.txt", "r");

	fread(buffer, sizeof(buffer), 1, fp);

	printf("%s\n", buffer);

	fclose(fp);
	return 0;
}