#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);
	printf("%d %d %d %d %d", num%10, num%100/10, num%1000/100, num%10000/1000, num/10000);

	return 0;

}