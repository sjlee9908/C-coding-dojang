#include <stdio.h>
#include <stdlib.h>

int main() {
	register int num1 = 10;

	printf("%d\n", num1);

	register int* numptr = malloc(sizeof(int));

	*numptr = 20;
	printf("%d\n", *numptr);
	free(numptr);

	return 0;
}