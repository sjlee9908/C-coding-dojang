#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char s1[10] = "Hello";
	char* s2 = malloc(sizeof(char) * 10);

	strcpy(s2, s1);

	printf("%s", s2);

	free(s2);

	return 0;
}