#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fwrite, fclose �Լ��� ����� ��� ����
#include <string.h>    // strlen �Լ��� ����� ��� ����

int main() {
	char* s1 = "Hello, world!";
	FILE* fp = fopen("hello.txt", "w");

	fwrite(s1, strlen(s1), 1, fp);
	
	fclose(fp);
	return 0;
}