#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	scanf("%d", &num1);

	switch (num1)
	{
	case 1:
	case 2:
		printf("1 �Ǵ� 2�Դϴ�\n");
		break;
	case 3:
	case 4:
		printf("3 �Ǵ� 4�Դϴ�\n");
		break;
	default:
		printf("default\n");
	}

	return 0;
}