#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fwrite, fclose 함수가 선언된 헤더 파일
#include <string.h>    // strcpy, memset 함수가 선언된 헤더 파일

#pragma pack(push, 1)
struct Data {
	char c1;
	short num1;
	int num2;
	char s1[20];
};
#pragma pack(pop)

int main() {
	struct Data d1;
	memset(&d1, 0, sizeof(d1));

	d1.c1 = 'a';
	d1.num1 = 32100;
	d1.num2 = 2100000100;
	strcpy(d1.s1, "Hello, world!");

	FILE* fp = fopen("data2.bin", "wb");

	fwrite(&d1, sizeof(d1), 1, fp);

	fclose(fp);

	return 0;
}