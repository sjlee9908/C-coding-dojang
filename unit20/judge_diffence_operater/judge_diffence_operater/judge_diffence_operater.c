#include <stdio.h>

int main()
{
	char alpha;

	scanf("%c", &alpha);

	if (alpha != 'k')
		printf("��\n");
	else
		printf("����\n");

	if (alpha > 'h')
		printf("��\n");
	else
		printf("����\n");

	if (alpha <= 'o')
		printf("��\n");
	else
		printf("����\n");

	return 0;
}