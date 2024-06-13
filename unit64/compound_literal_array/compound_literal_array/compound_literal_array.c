#include <stdio.h>

void printArray(int arr[], int count) {
	for (int i = 0; i < count; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	printArray((int[]) { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, 10);

	return 0;
}

