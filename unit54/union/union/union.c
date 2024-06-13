#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

union Box {
	short candy;
	float snack;
	char doll[8];
};

int main()
{
	union Box b1;

	printf("%d\n", sizeof(b1));

	strcpy(b1.doll, "bear");

	printf("%d\n", b1.candy);
	printf("%f\n", b1.snack);
	printf("%s\n", b1.doll);

	return 0;

}