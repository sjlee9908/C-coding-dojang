#include <stdio.h>

int main()
{
	int num1 = 1;
	int num2 = 0;

	if (num1 && num2)
		printf("��\n");
	else
		printf("����\n");

	if (num1 || num2)
		printf("��\n");
	else
		printf("����\n");

	if (!num1)
		printf("��\n");
	else
		printf("����\n");

	return 0;
}