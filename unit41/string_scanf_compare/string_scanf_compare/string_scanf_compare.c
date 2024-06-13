#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s1[20];
	char s2[20];

	printf("문자열 2개를 입력하세요: ");
	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);

	switch (ret)
	{
	case 0:
		printf("두 문자열이 같음");
		break;
	case 1:
		printf("%s가 %s보다 큼", s2, s1);
		break;
	case -1:
		printf("%s가 %s보다 큼", s1, s2);
		break;
	}
	return 0;
}