#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

struct NODE {
	struct NODE* next;
	int data;
};

void addFirst(struct NODE* target, int data) {
	struct NODE* newNode = malloc(sizeof(struct NODE));
	newNode->next = target->next;
	newNode->data = data;

	target->next = newNode;
}

int main() {
	struct NODE* head = malloc(sizeof(struct NODE));
	head->next = NULL;

	addFirst(head, 10);
	addFirst(head, 20);
	addFirst(head, 30);

	struct NODE* curr = head->next;

	while (curr != NULL) {
		printf("%d\n", curr->data);
		curr = curr->next;
	}
	curr = head->next;

	while (curr != NULL) {
		struct NODE* next = curr->next;
		free(curr);
		curr = next;
	}
	free(head);
	return 0;
}