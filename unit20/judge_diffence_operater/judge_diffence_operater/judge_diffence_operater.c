#include <stdio.h>

int main()
{
	char alpha;

	scanf("%c", &alpha);

	if (alpha != 'k')
		printf("Âü\n");
	else
		printf("°ÅÁş\n");

	if (alpha > 'h')
		printf("Âü\n");
	else
		printf("°ÅÁş\n");

	if (alpha <= 'o')
		printf("Âü\n");
	else
		printf("°ÅÁş\n");

	return 0;
}