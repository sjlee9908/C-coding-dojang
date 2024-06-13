#include <stdio.h>
#include <stdlib.h>

typedef struct _Data {
	char c1;
	int num1;
} Data, * PData;

int main()
{
	PData d1 = malloc(sizeof(Data));
	void* ptr;

	d1->c1 = 'a';
	d1->num1 = 10;

	ptr = d1;

	printf("%c\n", ((Data*)ptr)->c1);     // 'a' : 구조체 별칭의 포인터로 변환
	printf("%d\n", ((PData)ptr)->num1);    // 10  : 구조체 포인터 별칭으로 변환

	free(d1);    // 동적 메모리 해제

	return 0;
}