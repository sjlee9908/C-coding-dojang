#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#pragma pack(push, 1)
struct X850Firmware {
    short serial;
    char mode;
    char desc[20];
    int version;
};
#pragma push(pop)

int main() {
    struct X850Firmware x1;
    
    FILE* fp = fopen("x850.bin", "rb");

    fread(&x1, sizeof(x1), 1, fp);
    printf("%d\n%c\n%s\n%d", x1.serial, x1.mode, x1.desc, x1.version);

    fclose(fp);
    return 0;
}