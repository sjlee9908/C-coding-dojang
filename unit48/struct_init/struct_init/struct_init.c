#include <stdio.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main() {
	struct Person p1 = { .name = "ȫ�浿", .age = 30, .address = "����� ��걸 �ѳ���" };

	printf("�̸�: %s\n", p1.name);  
	printf("����: %d\n", p1.age);   
	printf("�ּ�: %s\n", p1.address);  


	struct Person p2 = { "��浿", 40, "����� ���ʱ� ������" };

	printf("�̸�: %s\n", p2.name);
	printf("����: %d\n", p2.age);
	printf("�ּ�: %s\n", p2.address);

	return 0;
}