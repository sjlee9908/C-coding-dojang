#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fprintf, fclose �Լ��� ����� ��� ����

int main() {
	FILE* fp = fopen("hello.txt", "w");

	fprintf(fp, "%s %d\n", "Hello", 100);

	fclose(fp);

	return 0;
}