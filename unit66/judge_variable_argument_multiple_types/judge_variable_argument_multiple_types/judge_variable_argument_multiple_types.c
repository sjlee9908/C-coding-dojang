#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>

int getSum(char* t, ...) {
    va_list ap;
    int res = 0;
    int i = 0;

    va_start(ap, t);
    while (t[i] != '\0') {
        switch (t[i])
        {
        case 'i':
            res += va_arg(ap, int);
            break;
        case 's':
            va_arg(ap, char*);
            break;
        case 'd':
            va_arg(ap, double);
            break;
        }
        i++;
    }
    va_end(ap);
    return res;
}

int main()
{
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d\n", getSum("isi", num1, "C", 10));
    printf("%d\n", getSum("sdsi", "Hello, world!", 5.3, "A", num2));
    printf("%d\n", getSum("iiss", 25, 38, "k", "R"));
    printf("%d\n", getSum("sidii", "Hello, C", num3, 2.234567, 878, 1291));

    return 0;
}