#include <stdio.h>

int main()
{
	int numArr[5] = { 11,22,33,44,55 };
	int* numPtrA;
	int* numPtrB;
	int* numPtrC;

	numPtrA = numArr;

	numPtrB = numPtrA + 1;
	numPtrB = numPtrA + 2;

	printf("%d\n", *numPtrA);
	printf("%d\n", *numPtrB);
}