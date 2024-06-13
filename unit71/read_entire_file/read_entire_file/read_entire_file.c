#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fseek, ftell, fread, fclose �Լ��� ����� ��� ����
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
#include <string.h>    // memset �Լ��� ����� ��� ����

int main()
{
	char* buffer;
	int size;
	int count;

	FILE* fp = fopen("hello.txt", "r");

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);

	buffer = malloc(size + 1);
	memset(buffer, 0, size + 1);

	fseek(fp, 0, SEEK_SET);
	count = fread(buffer, size, 1, fp);

	printf("%s size:%d, count:%d", buffer, size, count);
	fclose(fp);
	free(buffer);

	return 0;
}