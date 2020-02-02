#include "Header.h"

int k;

void Convert(long* N)
{
	ConvertTwo(*N);

	if (!overStack)
	{
		PrintStack();
	}
	else
	{
		printf("���� ��� ����������!\n");
	}
}

void ConvertTwo(long N)
{
	do
	{
		printf("� ��������� (1) ��� ��� ��� (0)?'\n ������� '1' ��� '0'\n");
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
		fprintf(stderr, "�� ����� �������� ��������!\n K ����� ���� ����� ������ ��� 1, ��� 0.\n �� ����� %i\n", k);
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