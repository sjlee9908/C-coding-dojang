#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char* s1 = "world";
	char* s2 = malloc(sizeof(char) * 20);

	strcpy(s2, "Hello");

	strcat(s2, s1);

	printf("%s\n", s2);

	free(s2);
	return 0;
}