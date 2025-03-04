#include <stdio.h>

union Data {
	char c1;
	short num1;
	int num2;
};

int main() {
	union Data d1;

	d1.num2 = 0x12345678;

	printf("0x%x\n", d1.num2);    // 0x12345678: 4바이트 전체 값 출력
	printf("0x%x\n", d1.num1);    // 0x5678: 앞의 2바이트 값만 출력
	printf("0x%x\n", d1.c1);      // 0x78: 앞의 1바이트 값만 출력

	printf("%d\n", sizeof(d1));   // 4: 공용체의 전체 크기는 가장 큰 자료형의 크기

	return 0;
}