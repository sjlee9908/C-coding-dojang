#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s1[20];
	char s2[20];

	printf("���ڿ� 2���� �Է��ϼ���: ");
	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);

	switch (ret)
	{
	case 0:
		printf("�� ���ڿ��� ����");
		break;
	case 1:
		printf("%s�� %s���� ŭ", s2, s1);
		break;
	case -1:
		printf("%s�� %s���� ŭ", s1, s2);
		break;
	}
	return 0;
}