#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main() {
    int funcNumber;
    int num1, num2;
    int (*fp)(int, int) = NULL;

    printf("함수 번호와 계산할 값을 입력하세요: ");
    scanf("%d %d %d", &funcNumber, &num1, &num2);

    switch (funcNumber)
    {
    case 0:
        fp = add;
        break;

    case 1:
        fp = sub;
        break;
    case 2:
        fp = mul;
        break;
    case 3:
        fp = div;
        break;
    }
    printf("%d\n", fp(num1, num2));
    return 0;
}