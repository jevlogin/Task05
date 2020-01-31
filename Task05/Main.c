#include <stdio.h>
#include "Header.h"

/*
	Логинов Евгений.
	Использовал код для перевода из 10 в 2 систему с прошлого урока, модернизируя его.
	Сделал в одном примере сразу с использованием односвязного списка как стека. 
	Также реализовал проверку на переполненение стека. Пришлось повозиться.
	Но мне все равно еще плохо понятно как работать со стеком. Дайте пожалуйста больше полезной информации, которую можно почитать. 
	Желательно разную, одну прямо для тупых ))) и можно что-то более сложное, чтобы моз сумел восприять все правильно.
*/

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");
	//	Максимальный размер стека
	Stack.maxSize = 10;
	//	Голова обнуляется 
	Stack.head = NULL;
	
#pragma region MyRegion1
	//	Наполнение стека
	/*int N = 71456441168230;
	ConvertTwo(N);
	if (!overStack)
	{
		PrintStack();
	}
	else
	{
		printf("Стек был переполнен!\n");
	}*/
#pragma endregion

#pragma region MyRegion3
	char str[] = "(2+(2*){}2))", *p;
	char sym;

	for (p = str; *p; p++)
	{
		sym = *p;
		if (CheckStr(sym))
		{
			//printf("Well done! - %c", sym);
			if (Stack.head == NULL)
			{
				//	Вводим первое значение, если до этого их не было.
				push(sym);
			}
			CheckFullStack(sym);
		}
	}
	if (Stack.head == NULL)
	{
		printf("Последовательность правильная!\n");
	}
	else
	{
		printf("Последовательность не верна! Вот то что осталось!\n");
		PrintStack();
	}

#pragma endregion

	return 0;
}int CheckFullStack(char sym){	Node* begin = Stack.head;	while (begin != NULL)
	{
		if (!Inverse(sym))
		{
			push(sym);
		}
		else
		{
			pop();
		}
	}}int Inverse(char s){	if ( (Stack.head->value == '(' && s == ')') || (Stack.head->value == '[' && s == ']') || (Stack.head->value == '{' && s == '}') )
	{
		return 1;
	}	else
	{
		return 0;
	}}int CheckStr(str)
{
	char t;
	t = str;
	if (t == '(' || t == '[' || t == '{' || t == ')' || t == ']' || t == '}')
	{
		return 1;
	}
	return 0;
}