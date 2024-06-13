#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int fee;
	scanf("%d", &fee);

	while (fee >= 1200) {
		printf("%d\n", fee -= 1200);
	}
	return 0;
}