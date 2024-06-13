#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����
#include <stdlib.h>    // malloc

struct Person {
	char name[20];
	int age;
	char address[100];
};

struct Person* allocPerson()
{
	struct Person* p = malloc(sizeof(struct Person));

	strcpy(p->name, "ȫ�浿");
	p->age = 30;
	strcpy(p->address, "����� ��걸 �ѳ���");

	return p;
}

int main()
{
	struct Person* p1;

	p1 = allocPerson();

	printf("�̸�: %s\n", p1->name);
	printf("����: %d\n", p1->age); 
	printf("�ּ�: %s\n", p1->address); 

	free(p1);   

	return 0;
}