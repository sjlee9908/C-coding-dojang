#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fseek, ftell, fclose �Լ��� ����� ��� ����

int main()
{
	int size;
	FILE* fp = fopen("hello.txt", "r");

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);

	printf("%d\n", size);

	fclose(fp);

	return 0;
}