#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int gender;
	int age;
	int isOwner;

	scanf("%d %d %d", &gender, &age, &isOwner);

	printf("�ȳ��ϼ���.\n");
	printf("���� ����\n");

	if (gender == 2)
		goto EXIT;
	if (age<30)
		goto EXIT;
	if (isOwner == 0)
		goto EXIT;

EXIT:
	printf("�ȳ����輼��.\n");
	printf("���� �ݴ´�.\n");

	return 0;
}