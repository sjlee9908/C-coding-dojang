#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	getchar();

	char** matrix = malloc(sizeof(char*) * (m+2));

	for (int i = 0; i < m+2; i++) {
		matrix[i] = malloc(sizeof(char) * (n+2));
	}

	for (int i = 0; i < m + 2; i++) {
		for (int j = 0; j < n + 2; j++) {
			matrix[i][j] = '-';
		}
	}

	for (int i = 1; i < m+1; i++) {
		for (int j = 1; j < n + 1; j++) {
			scanf("%c", &matrix[i][j]);
			if (matrix[i][j] == '.') matrix[i][j] = 0;
		}
		getchar();
	}
	

	for (int i = 1; i < m+1; i++) {
		for (int j = 1; j < n + 1; j++) {
			if (matrix[i][j] == '*') continue;		//1���� �迭�� �޸� �󿡼� �����ϳ�
													//�����Ҵ��� 2�����迭�� �޸� �󿡼� �������� ����
													//�� array[0][M] �ּҿ� +1 �Ѱ��� array[1][0]�� �ּҰ� �ƴ�.
			else {
				if (matrix[i-1][j-1] == '*') matrix[i][j]++;
				if (matrix[i-1][j] == '*') matrix[i][j]++;
				if (matrix[i-1][j+1] == '*') matrix[i][j]++;
				if (matrix[i][j-1] == '*') matrix[i][j]++;
				if (matrix[i][j+1] == '*') matrix[i][j]++;
				if (matrix[i+1][j-1] == '*') matrix[i][j]++;
				if (matrix[i+1][j] == '*') matrix[i][j]++;
				if (matrix[i+1][j+1] == '*') matrix[i][j]++;

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


	for (int i = 0; i < m + 2; i++) {
		free(matrix[i]);
	}
	free(matrix);
	return 0;

}