#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fscanf, fclose 함수가 선언된 헤더 파일

int main() {
	char s1[10];
	int num1;

	FILE* fp = fopen("hello.txt", "r");
	fscanf(fp, "%s %d", s1, &num1);

	printf("%s %d", s1, num1);
	fclose(fp);
	return 0;
}