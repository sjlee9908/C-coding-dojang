#include <stdio.h>

#pragma pack(push, 1)
struct Packet {
    char p1;
    char p2;
    char p3;
};
#pragma pack(pop, 1)


int main()
{
    struct Packet pkt;

    printf("%d\n", sizeof(pkt));

    return 0;
}