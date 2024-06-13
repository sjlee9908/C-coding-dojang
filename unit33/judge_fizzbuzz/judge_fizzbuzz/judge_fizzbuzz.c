#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	for (; a <= b; a++) {
		if (a % 5 == 0 && a % 11 == 0)
			printf("FizzBuzz\n");
		else if (a % 5 == 0)
			printf("Fizz\n");
		else if (a % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", a);
	}
	return 0;
}