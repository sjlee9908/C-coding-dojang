#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	scanf("%d", &num1);

	switch (num1) 
	{
	case 1:
		printf("1�Դϴ�\n");
	case 2:
		printf("2�Դϴ�\n");
	default:
		printf("default\n");

	}
}