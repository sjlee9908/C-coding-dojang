#include <stdio.h>

void helloString(char* s1) {
	printf("Hello, %s", s1);
}

int main() {
	helloString("world!");

	return 0;
}