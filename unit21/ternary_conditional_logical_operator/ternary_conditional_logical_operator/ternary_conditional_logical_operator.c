#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 0;

    printf("%s\n", num1 && num2 ? "��" : "����");
    printf("%s\n", num1 || num2 ? "��" : "����");

    return 0;
}