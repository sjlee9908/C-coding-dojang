#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>>    // fopen, fread, fclose 함수가 선언된 헤더 파일

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

	FILE* fp = fopen("data2.bin", "rb");
	fread(&d1, sizeof(d1), 1, fp);
	printf("%c %d %d %s\n", d1.c1, d1.num1, d1.num2, d1.s1);

	fclose(fp);
	return 0;
}