#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[30];
    int age;
};

int main()
{
    struct Person* p[5];



    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++) {
        p[i] = malloc(sizeof(struct Person));
    }

    scanf("%s %d %s %d %s %d %s %d %s %d",
        &p[0]->name, &p[0]->age, &p[1]->name, &p[1]->age, &p[2]->name, &p[2]->age, &p[3]->name, &p[3]->age, &p[4]->name, &p[4]->age);

    int biggest=0;
    int j;
    for (int i = 0; i < 5; i++) {
        if (biggest < p[i]->age) {
            biggest = p[i]->age;
            j = i;
        }
    }

    printf("%s", p[j]->name);



    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++)
    {
        free(p[i]);
    }

    return 0;
}