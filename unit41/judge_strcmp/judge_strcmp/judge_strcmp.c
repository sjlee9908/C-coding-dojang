#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[31], s2[31];

	scanf("%s %s", s1, s2);

	printf("%d", strcmp(s1, s2));
	
	return 0;
}