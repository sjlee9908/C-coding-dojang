#define _CRT_SECURE_NO_WARNINGS    // sprintf ���� ���� ���� ������ ���� ����
#include <stdio.h>     // sprintf �Լ��� ����� ��� ����
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

int main()
{
	char* s1 = malloc(sizeof(char) * 30);

	sprintf(s1, "%c %d %f %e", 'a', 10, 3.2f, 1.123456e-21f);

	printf("%s", s1);

	free(s1);
	return 0;
}