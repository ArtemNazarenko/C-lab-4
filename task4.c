#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Sort(const  int *s, const int *s1)
{
	return *s1 - *s;
}

void lineSort(char *str[], int N)
{
	qsort(str, N, sizeof(char*), Sort);
}

void printSortLines(const char *str[], int size, FILE *fp)
{
	int i = 0;
	for (int i = 0; i < size; i++)
	{
		fprintf(fp, "%s", str[i]);
	}
	fclose(fp);
}



