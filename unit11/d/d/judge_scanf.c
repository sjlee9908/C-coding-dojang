#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;
    double num2;
    char c1;

    scanf("%d %lf %c", &num1, &num2, &c1);

    printf("%d\n", num1);
    printf("%lf\n", num2);
    printf("%c\n", c1);

    return 0;
}