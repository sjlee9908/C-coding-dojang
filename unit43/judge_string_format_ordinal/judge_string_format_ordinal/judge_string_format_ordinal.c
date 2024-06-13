#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int number;
    char name[31], result[40];

    scanf("%d %s", &number, name);

    if (number == 1) sprintf(result, "%dst %s", 1, name);
    else if (number == 2) sprintf(result, "%dnd %s", 2, name);
    else if (number == 3) sprintf(result, "%drd %s", 3, name);
    else sprintf(result, "%dth %s", number, name);

    printf("%s\n", result);

    return 0;
}