#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;
	scanf("%d", &size);

	int** m = malloc(sizeof(int*) * size);
	for (int i = 0; i < size; i++) {
		m[i] = malloc(sizeof(int) * size);
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) m[i][j] = 1;
			else m[i][j] = 0;
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}


	for (int i = 0; i < size; i++) {
		free(m[i]);
	}
	free(m);
	return 0;
}
