#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20];
    char s2[20];

    printf("���ڿ� �� ���� �Է��ϼ���: ");
    scanf("%s %s", s1, s2);

    int ret = strcmp(s1, s2);  
    printf("��ȯ��: %d\n", ret);


    if (ret == 0)
    {
        printf("�� ���ڿ��� ����\n");
    }
    else if (ret > 0)  
    {
        printf("%s���� %s�� ŭ\n", s2, s1);
    }
    else if (ret < 0)  
    {
        printf("%s���� %s�� ŭ\n", s1, s2);
    }

    return 0;
}