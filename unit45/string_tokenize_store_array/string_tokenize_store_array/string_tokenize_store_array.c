#define _CRT_SECURE_NO_WARNINGS    // strtok 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strtok 함수가 선언된 헤더 파일

int main()
{
	char s1[30] = "The Little Prince";
	char* sArr[10] = { NULL, };
	int i = 0;

	char* ptr = strtok(s1, " ");

	while (ptr != NULL) {
		sArr[i] = ptr;
		i++;
		ptr = strtok(NULL, " ");
	}
	for (int i = 0; i < 10; i++) {
		if (sArr[i] != NULL) {
			printf("%s\n", sArr[i]);
		}
	}

	return 0;
}