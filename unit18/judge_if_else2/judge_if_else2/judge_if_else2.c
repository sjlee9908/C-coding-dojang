#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int k, e, m, s;
	scanf("%d %d %d %d", &k, &e, &m, &s);

	if (k <= 100 && k>=0 && e <= 100 && e>= 0 && m <=100 && m >= 0 && s < 100 && s >= 0) {
		if ((k + e + m + s) / 4 >= 85) {
			printf("�հ�");
		}
		else {
			printf("���հ�");
		}
	}
	else {
		printf("�߸��� ����");
	}
	return 0;


}