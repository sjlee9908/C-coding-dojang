#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fgets, fclose �Լ��� ����� ��� ����

int main()
{
	char buffer[20];
	FILE* fp = fopen("hello.txt", "r");

	fgets(buffer, sizeof(buffer), fp);
	printf("%s\n", buffer);

	fclose(fp);

	return 0;

}