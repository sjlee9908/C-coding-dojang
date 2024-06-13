#include <stdio.h>

void setAttackSpeed(float num) {
    printf("Attack Speed: %f\n", num);
}

int main()
{
    setAttackSpeed(0.638f);
    setAttackSpeed(1.23f);

    return 0;
}