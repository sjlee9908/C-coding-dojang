#include <stdio.h>

int main()
{
    unsigned char flag = 7;

    flag ^= 2;
    flag ^= 8;

    printf("%u\n", flag); 

    if (flag & 1)
        printf("0000 0001�� ���� ����\n");
    else
        printf("0000 0001�� ���� ����\n");

    if (flag & 2)
        printf("0000 0010�� ���� ����\n");
    else
        printf("0000 0010�� ���� ����\n");

    if (flag & 4)
        printf("0000 0100�� ���� ����\n");
    else
        printf("0000 0100�� ���� ����\n");

    if (flag & 8)
        printf("0000 1000�� ���� ����\n");
    else
        printf("0000 1000�� ���� ����\n");

    return 0;
}