#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	printf("%s\n", num1 && num2 ? "Âü" : "°ÅÁş");
	printf("%s\n", num1 || num2 ? "Âü" : "°ÅÁş");
	printf("%s\n", !num1 ? "Âü" : "°ÅÁş");
}