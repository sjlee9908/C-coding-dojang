#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

char* helloLiteral() {
	char* s1 = "Hello, world!";
	return s1;
}

char* helloDynamicMemory() {
	char* s1 = malloc(sizeof(char) * 20);
	strcpy(s1, "Hello, world!");
	return s1;
}

int main() {
	char* s1;
	char* s2;

	s1 = helloLiteral();
	s2 = helloDynamicMemory();

	printf("%s\n", s1);
	printf("%s\n", s2);

	free(s2);

	return 0;
}