#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hello()
{
    printf("Hello, ");
}

void numberToString(int n, char* buffer)
{
    sprintf(buffer, "%d", n);
}

int main()
{
    void (*fp1)() = hello;
    void (*fp2)(int, char*) = numberToString;
    
    char buffer[20];

    fp1 = hello;
    fp2 = numberToString;

    fp1();
    fp2(100, buffer);
    printf("%s\n", buffer);

    return 0;
}
