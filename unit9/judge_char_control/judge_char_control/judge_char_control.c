#include <stdio.h>

int main()
{
    char c1;
    char c2;
    char c3;

    c1 = '\t';
    c3 = '\t';
    c2 = '\n';

    printf("Hello%cworld%cHello%cworld\n", c1, c2, c3);

    return 0;
}