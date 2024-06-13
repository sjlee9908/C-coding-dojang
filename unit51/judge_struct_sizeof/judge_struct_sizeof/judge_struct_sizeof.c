#include <stdio.h>

struct EncryptionHeader {
    char flags;
    int seq1;
    int seq2;
};

int main()
{
    struct EncryptionHeader header;

    printf("%d\n", sizeof(header));

    return 0;
}