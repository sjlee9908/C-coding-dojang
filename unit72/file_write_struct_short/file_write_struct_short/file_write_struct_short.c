#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fwrite, fclose 함수가 선언된 헤더 파일

#pragma pack(push, 1)
struct Data {
	short num1;
	short num2;
	short num3;
	short num4;
};
#pragma pack(pop)

int main() {
	struct Data d1;
	
	d1.num1 = 100;
	d1.num2 = 200;
	d1.num3 = 300;
	d1.num4 = 400;

	FILE* fp = fopen("data.bin", "wb");

	fwrite(&d1, sizeof(d1), 1, fp);

	fclose(fp);

	return 0;
}