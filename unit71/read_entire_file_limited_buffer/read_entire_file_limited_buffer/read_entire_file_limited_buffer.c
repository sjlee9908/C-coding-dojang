#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, feof, fread, fclose 함수가 선언된 헤더 파일
#include <string.h>    // strlen, memset 함수가 선언된 헤더 파일

int main() {
	char buffer[5] = { 0, };
	int count = 0;
	int total = 0;

	FILE* fp = fopen("hello.txt", "r");

	while (feof(fp) == 0) {
		count = fread(buffer, sizeof(char), 4, fp);
		printf("%s", buffer);
		memset(buffer, 0, 5);
		total += count;
	}
	printf("\ntotal: %d\n", total);
	fclose(fp);
	return 0;

}