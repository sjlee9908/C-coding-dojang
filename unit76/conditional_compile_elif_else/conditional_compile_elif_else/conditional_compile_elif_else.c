#include <stdio.h>
#define USB

int main() {
#ifdef PS2
	printf("PS2\n");
#elif defined USB
	printf("USB\n");
#else
	printf("�������� �ʴ� ��ġ�Դϴ�\n");
#endif

	return 0;
}