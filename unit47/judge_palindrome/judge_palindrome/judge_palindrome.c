#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	char text[31];
	int len;
	bool isPalindrome = true;

	scanf("%[^\n]s", text);

	len = strlen(text);

	for (int i = 0; i < len/2-1; i++) {
		int j = len - 1 - i;
		while (text[i] == ' ') i++;
		if (i == len / 2) break;
		while (text[j] == ' ') j--;
		if (j == len / 2) break;
		if (text[i] != text[j]) { isPalindrome = false; break; }
	}
	printf("%d\n", isPalindrome);
}
