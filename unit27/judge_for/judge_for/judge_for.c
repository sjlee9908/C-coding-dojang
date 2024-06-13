#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char alp;
	scanf("%c", &alp);

	for (; alp <= 'z'; alp++) {
		printf("%c", alp);
	}
	return 0;
}