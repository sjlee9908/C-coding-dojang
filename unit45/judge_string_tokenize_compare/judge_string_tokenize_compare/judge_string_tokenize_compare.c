#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[1001];
	scanf("%[^\n]s", s1);
	int count = 0;

	char* ptr = strtok(s1, " .,?/';][:<>\"\\|");
	while (ptr != NULL) {
		if (strcmp(ptr, "the") == 0) count++;
		ptr = strtok(NULL, " .,?/';][:<>\"\\|");
	}

	printf("%d", count);
	return 0;
}