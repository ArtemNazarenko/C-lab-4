//Написать программу, сортирующую строки(см.задачу 1), но использующую
//строки, прочитанные из текстового файла.Результат работы программы также
//записывается в файл.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task4.h"
#define N 256

int main()
{
	FILE *fp, *fp1;;
	int count = 0;
	int i = 0, k = 0;
	char *buf[N] = { 0 };
	char mas[N][N] = { 0 };

	fp = fopen("1.txt", "rt");
	if (fp == NULL)
	{
		puts("ERROR!\nEmpty file!");
		return 1;
	}

	while (fgets(mas[count], N, fp) != NULL)
	{
		buf[count] = mas[count++];
	}

	fclose(fp);
	lineSort(buf, count);

	fp1 = fopen("2.txt", "wt");
	if (fp1 == NULL)
	{
		puts("ERROR!\nEmpty file!");
		return 1;
	}

	printSortLines(buf, count, fp1);
	system("pause");
	return 0;
}
