#define _CRT_SECURE_NO_WARNINGS    // strcpy, strcat ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy, strcat �Լ��� ����� ��� ����
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

int main()
{
	char s1[10] = "world";
	char* s2 = malloc(sizeof(char) * 20);

	strcpy(s2, "Hello");

	strcat(s2, s1);

	printf("%s", s2);

	free(s2);
	return 0;
}