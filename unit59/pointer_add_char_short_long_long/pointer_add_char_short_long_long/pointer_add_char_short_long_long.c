#include <stdio.h>

int main()
{
	char* cPtr = NULL;
	short* numPtr1 = NULL;
	long long* numPtr2 = NULL;

	printf("%p\n", cPtr + 1);
	printf("%p\n", numPtr1 + 1);
	printf("%p\n", numPtr2 + 1);
}