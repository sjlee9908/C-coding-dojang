#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char c1;

    do
    {
        scanf("%c", &c1);
    } while (c1 != 'q');

    printf("프로그램 종료\n");

    return 0;
}