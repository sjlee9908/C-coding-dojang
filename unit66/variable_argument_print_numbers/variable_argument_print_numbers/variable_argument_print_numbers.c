#include <stdio.h>
#include <stdarg.h>

void printNumbers(int args, ...) {
	va_list ap;

	va_start(ap, args);
	for (int i = 0; i < args; i++) {
		int num = va_arg(ap, int);
		printf("%d ", num);
	}
	va_end(ap);

	printf("\n");
}

int main() {
	printNumbers(1, 10);                // 인수 개수 1개
	printNumbers(2, 10, 20);            // 인수 개수 2개
	printNumbers(3, 10, 20, 30);        // 인수 개수 3개
	printNumbers(4, 10, 20, 30, 40);    // 인수 개수 4개

	return 0;
}