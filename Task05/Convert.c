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
		printf("Стек был переполнен!\n");
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