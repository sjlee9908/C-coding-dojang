#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����

struct Person {
	char name[20];
	int age;
	char address[100];
};

struct Person getPerson() {
	struct Person p;

	strcpy(p.name, "ȫ�浿");
	p.age = 30;
	strcpy(p.address, "����� ��걸 �ѳ���");

	return p;
}

int main() {
	struct Person p1;

	p1 = getPerson();

	printf("�̸�: %s\n", p1.name);  
	printf("����: %d\n", p1.age);   
	printf("�ּ�: %s\n", p1.address);

	return 0;
}