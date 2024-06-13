#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	scanf("%d", &age);
	
	if (age < 18)
		printf("청소년 관람 불가");

	return 0;
}