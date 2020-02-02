#include "Header.h"

// ������ ��������� ���� ������
struct TNode
{
	T value;
	struct TNode* next;
};
typedef struct TNode Node;

struct Stack 
{
	Node* head;
	int size;
	int maxSize;
} Stack;
extern struct Stack Stack;

int overStack;

T push(T value)
{
	if (Stack.size >= Stack.maxSize) {
		printf("Error stack size\n");
		overStack++;
		return 1;
	}
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->value = value;
	tmp->next = Stack.head;
	Stack.head = tmp;
	Stack.size++;
}

T pop()
{
	if (Stack.size == 0)
	{
		printf("Stack is empty");
		return 1;
	}
	// ��������� ���������
	Node* next = NULL;
	// �������� "�������" ������
	T value;
	value = Stack.head->value;
	next = Stack.head;
	Stack.head = Stack.head->next;
	// ������, �� ������� ��������� ������ �������, ���������� ������
	free(next);
	// ���������� ��������, ������� ���� � ������
	Stack.size--;
	return value;
}

void PrintStack()
{
	Node* current = Stack.head;
	while (current != NULL)
	{

		printf("%i ", current->value);
		current = current->next;
	}
}