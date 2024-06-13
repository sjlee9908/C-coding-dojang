#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char text[11];
	int n;
	int len;

	scanf("%d %s", &n, text);
	len = strlen(text);

	if (len < n) {
		printf("wrong");
		return 0;
	}

	for (int i = 0; i <= len - n; i++) {
		for (int j = i; j < i+n; j++) {
			printf("%c", text[j]);
		}printf("\n");
	}
}