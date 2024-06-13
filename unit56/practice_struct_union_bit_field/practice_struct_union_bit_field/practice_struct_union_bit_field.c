#include <stdio.h>

struct Flags {
    union {
        struct {
            unsigned short a : 4;
            unsigned short b : 2;
            unsigned short c : 2;
            unsigned short d : 8;
        };
        unsigned short e;
    };
};

int main()
{
    struct Flags f1 = { 0, };

    f1.a = 8;
    f1.b = 2;
    f1.c = 2;
    f1.d = 128;

    printf("%u\n", f1.e);

    return 0;
}