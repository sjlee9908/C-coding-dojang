#define _CRT_SECURE_NO_WARNINGS     // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
#include <string.h>    // strcpy �Լ��� ����� ��� ����

union Box {
	short candy;
	float snack;
	char doll[8];
};

int main() {
	union Box* b1 = malloc(sizeof(union Box));

	printf("%d\n", sizeof(union Box));

	strcpy(b1->doll, "bear");

	printf("%d\n", b1->candy);
	printf("%f\n", b1->snack);
	printf("%s\n", b1->doll);

	free(b1);

	return 0;
}