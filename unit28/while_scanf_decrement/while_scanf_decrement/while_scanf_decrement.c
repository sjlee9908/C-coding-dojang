#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count;
	scanf("%d", &count);

	while (count > 0) {
		printf("Hello, world! %d\n", count);
		count--;
	}
	return 0;
}