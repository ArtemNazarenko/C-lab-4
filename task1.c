#include "task1.h"

int Sort(const  int *s, const int *s1)
{
	return *s1-*s;

	// или можно записать так
	/*if (strlen(*(char**)s) > strlen(*(char**)s1))
	{
		return 1;
	}
	else
	{
		return 0;
	}*/
}

void lineSort(char *str[], int N)
{
	qsort(str, N, sizeof(char*), Sort);
}

void printLines(const char *str[], int N)
{
	for (int i = 0; i < N; i++)
	{
		printf("%s", str[i]);
	}
}