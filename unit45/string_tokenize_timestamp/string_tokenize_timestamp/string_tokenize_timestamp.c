#define _CRT_SECURE_NO_WARNINGS    // strtok 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strtok 함수가 선언된 헤더 파일

int main()
{
	char s1[30] = "2015-06-10T15:32:19";

	char* ptr = strtok(s1, "-T:");

	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strtok(NULL, "-T:");
	}


	return 0;
}