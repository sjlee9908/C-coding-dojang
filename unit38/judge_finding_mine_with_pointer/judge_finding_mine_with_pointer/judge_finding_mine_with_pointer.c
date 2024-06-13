#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	getchar();

	char** matrix = malloc(sizeof(char*) * (m + 2));

	matrix[0] = (char*)malloc(sizeof(char) * (m + 2) * (n + 2));		//0행에 쭉 원소배열의 개수대로 선언

	for (int i = 1; i < (m + 2); i++) {							//i행(1~)의 주소 = i-1행의 주소 + 열의개수
		matrix[i] = matrix[i - 1] + (n + 2);
	}


	for (int i = 0; i < m + 2; i++) {
		for (int j = 0; j < n + 2; j++) {
			matrix[i][j] = '-';
		}
	}

	for (int i = 1; i < m + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			scanf("%c", &matrix[i][j]);
			if (matrix[i][j] == '.') matrix[i][j] = 0;
		}
		getchar();
	}


	for (int i = 1; i < m + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			char* p = &matrix[i][j];
			if (*p == '*') continue;
			else {
				if (*(p - 1 - (n + 2)) == '*') matrix[i][j]++;
				if (*(p - (n + 2)) == '*') matrix[i][j]++;
				if (*(p + 1 - (n + 2)) == '*') matrix[i][j]++;
				if (*(p - 1) == '*')matrix[i][j]++;
				if (*(p + 1) == '*')matrix[i][j]++;
				if (*(p - 1 + (n + 2)) == '*') matrix[i][j]++;
				if (*(p + (n + 2)) == '*') matrix[i][j]++;
				if (*(p + 1 + (n + 2)) == '*') matrix[i][j]++;

			}
		}
	}

	for (int i = 1; i < m + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			if (matrix[i][j] == '*' || matrix[i][j] == '-') printf("%c", matrix[i][j]);
			else printf("%d", matrix[i][j]);
		}
		printf("\n");
	}


	free(matrix[0]);
	free(matrix);
	return 0;

}