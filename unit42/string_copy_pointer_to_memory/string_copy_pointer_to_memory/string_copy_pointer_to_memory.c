#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ���ǵ� ��� ����
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

int main()
{
	char* s1 = "hello";
	char* s2 = malloc(sizeof(char) * 10);

	strcpy(s2, s1);

	printf("%s", s2);

	free(s2);
	return 0;;
}