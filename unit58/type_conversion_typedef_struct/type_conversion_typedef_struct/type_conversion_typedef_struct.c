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

	printf("%c\n", ((Data*)ptr)->c1);     // 'a' : ����ü ��Ī�� �����ͷ� ��ȯ
	printf("%d\n", ((PData)ptr)->num1);    // 10  : ����ü ������ ��Ī���� ��ȯ

	free(d1);    // ���� �޸� ����

	return 0;
}