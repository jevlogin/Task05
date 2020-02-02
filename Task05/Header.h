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
extern void Convert(long N);
extern void ConvertTwo(long N);
extern long convertToBinRecursion(long n);
extern void convertToBin(long n);



#endif // !_HEADER_H_