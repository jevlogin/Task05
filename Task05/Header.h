#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <locale.h>
#define T int
#define ARR_SIZE 100

//	будем использовать инициализатор запуска алгоритма, решения с рекурсией или без нее...
//	изначально, он ничему не равен.
int k;
int overStack;
void ConvertTwo(long N);
long convertToBinRecursion(long n);
void convertToBin(long n);
T push(T value);
T pop();
void PrintStack();



// Опишем структуру узла списка
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
};
struct Stack Stack;

T push(T value)
{
	if (Stack.size >= Stack.maxSize) {
		printf("Error stack size\n");
		overStack++;
		return;
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
		return;
	}
	// Временный указатель
	Node* next = NULL;
	// Значение "наверху" списка
	T value;
	value = Stack.head->value;
	next = Stack.head;
	Stack.head = Stack.head->next;
	// Запись, на которую указывала голова удаляем, освобождая память
	free(next);
	// Возвращаем значение, которое было в голове
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

void ConvertTwo(long N)
{
	do
	{
		printf("С рекурсией (1) или без нее (0)?'\n Введите '1' или '0'\n");
	} while (!(scanf("%i", &k)) || k > 1);

	if (k == 0)
	{
		system("cls");
		convertToBin(N);
	}
	else if (k == 1)
	{
		system("cls");
		convertToBinRecursion(N);

	}
	else
	{
		system("cls");
		fprintf(stderr, "Вы ввели неверное значение!\n K может быть равно только или 1, или 0.\n Вы ввели %i\n", k);
	}

}

long convertToBinRecursion(long n)
{
	if (n > 0 && !overStack)
	{
		push(n % 2);
		return convertToBinRecursion(n / 2);
	}
}

void convertToBin(long n)
{
	while (n > 0 && !overStack)
	{
		push(n % 2);
		n /= 2;
	}
}