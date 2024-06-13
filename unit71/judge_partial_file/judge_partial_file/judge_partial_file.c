#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp = fopen("words.txt", "r");
	char buffer[10] = { 0, };

	fseek(fp, 7, SEEK_SET);
	fread(buffer, 4, 1, fp);
	printf("%s", buffer);

	memset(buffer, 0, 10);
	fseek(fp, -6, SEEK_END);
	fread(buffer, 2, 1, fp);
	printf("%s", buffer);

	fclose(fp);

}