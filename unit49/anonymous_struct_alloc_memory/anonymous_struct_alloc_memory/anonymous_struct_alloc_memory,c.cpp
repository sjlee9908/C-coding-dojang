#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

typedef struct {    
    char name[20]; 
    int age;         
    char address[100];  
} Person;        

int main()
{
    Person* p1 =(Person*)malloc(sizeof(Person));   


    strcpy(p1->name, "ȫ�浿");
    p1->age = 30;
    strcpy(p1->address, "����� ��걸 �ѳ���");

    printf("�̸�: %s\n", p1->name);      
    printf("����: %d\n", p1->age);      
    printf("�ּ�: %s\n", p1->address);    

    free(p1);  

    return 0;
}