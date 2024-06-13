#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			
			if (j < num-i-1) {
				printf(" ");
			}
			else {
				printf("*");
			}
			
		}

		for (int j = 0; j < num; j++) {
			if (j < i) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}