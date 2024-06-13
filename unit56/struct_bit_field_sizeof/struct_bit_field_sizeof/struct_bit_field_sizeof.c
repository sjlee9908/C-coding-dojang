#include <stdio.h>

struct Flags {
	unsigned int a : 1;
	unsigned int b : 1;
	unsigned int c : 1;
};

int main()
{
	printf("%d", sizeof(struct Flags));
	return 0;
}