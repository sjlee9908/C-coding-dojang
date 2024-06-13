#define _CRT_SECURE_NO_WARNINGS    // strtok 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>

int main() {
	char s1[30] = "The Little Prince";

	char* ptr = strtok(s1, " ");

	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}

	return 0;
}