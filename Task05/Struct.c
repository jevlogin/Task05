#pragma once
#include "Header.h"
/*
	У меня вопрос, почему сама структура должна быть описана именно в хедере или в главном файле??? 
	Почему не сделать как отдельный класс например на языке СИ++ или СИ шарп
*/
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