#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fscanf, fclose �Լ��� ����� ��� ����

int main() {
	char s1[10];
	int num1;

	FILE* fp = fopen("hello.txt", "r");
	fscanf(fp, "%s %d", s1, &num1);

	printf("%s %d", s1, num1);
	fclose(fp);
	return 0;
}