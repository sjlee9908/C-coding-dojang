#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fprintf, fclose 함수가 선언된 헤더 파일

int main() {
	FILE* fp = fopen("hello.txt", "w");

	fprintf(fp, "%s %d\n", "Hello", 100);

	fclose(fp);

	return 0;
}