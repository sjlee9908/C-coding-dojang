#define _CRT_SECURE_NO_WARNINGS    // strcat ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcat �Լ��� ����� ��� ����

int main()
{
	char* s1 = "world";
	char* s2 = "Hello";

	strcat(s2, s1);

	printf("%s", s2);

	return 0;
}