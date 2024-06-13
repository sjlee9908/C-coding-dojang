#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = malloc(sizeof(char) * 31);
	char* s2 = malloc(sizeof(char) * 31);
	char* s3 = malloc(sizeof(char) * 31);
	char* s4 = malloc(sizeof(char) * 31);

	scanf("%s %s %s %s", s1, s2, s3, s4);

	printf("%s\n%s\n%s\n%s", s1, s2, s3, s4);

	free(s1);
	free(s2);
	free(s3);
	free(s4);

	return 0;

}