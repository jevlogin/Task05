#ifndef _HEADER_H_
#define _HEADER_H_

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <locale.h>

#define T int
#define ARR_SIZE 100

extern int overStack;
extern struct Stack Stack;
extern T push(T value);
extern T pop();
extern void PrintStack();
extern int k;
extern void Convert(long* N);
extern void ConvertTwo(long N);
extern long convertToBinRecursion(long n);
extern void convertToBin(long n);

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
} Stack;
struct Stack Stack;



#endif // !_HEADER_H_