#include <stdio.h>
#include "Header.h"

/*
	������� �������.
	����������� ��� ��� �������� �� 10 � 2 ������� � �������� �����, ������������ ���.
	������ � ����� ������� ����� � �������������� ������������ ������ ��� �����. 
	����� ���������� �������� �� �������������� �����. �������� ����������.
	�� ��� ��� ����� ��� ����� ������� ��� �������� �� ������. ����� ���������� ������ �������� ����������, ������� ����� ��������. 
	���������� ������, ���� ����� ��� ����� ))) � ����� ���-�� ����� �������, ����� ��� ����� ��������� ��� ���������.
*/

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");
	//	������������ ������ �����
	Stack.maxSize = 10;
	//	������ ���������� 
	Stack.head = NULL;
	
#pragma region MyRegion1
	//	���������� �����
	/*int N = 71456441168230;
	ConvertTwo(N);
	if (!overStack)
	{
		PrintStack();
	}
	else
	{
		printf("���� ��� ����������!\n");
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
				//	������ ������ ��������, ���� �� ����� �� �� ����.
				push(sym);
			}
			CheckFullStack(sym);
		}
	}
	if (Stack.head == NULL)
	{
		printf("������������������ ����������!\n");
	}
	else
	{
		printf("������������������ �� �����! ��� �� ��� ��������!\n");
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