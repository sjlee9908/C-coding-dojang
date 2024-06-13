#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fp = fopen("words.txt", "r");
	char buffer[10000] = { 0, };

	fread(buffer, 10000, 1, fp);

	for (int i = 9999; i >= 0; i--) {
		if (buffer[i] != 0) fputc(buffer[i], stdout);
	}

	fclose(fp);
}