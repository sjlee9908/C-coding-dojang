#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fputs, fclose �Լ��� ����� ��� ����

int main() {
	FILE* fp = fopen("hello.txt", "w");
	fputs("Hello, world!", fp);
	fclose(fp);
	return 0;
}