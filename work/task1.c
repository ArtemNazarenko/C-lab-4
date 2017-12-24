#include <stdio.h>
#include <string.h>
#include <stdlib.h>  //��� qsort & strcmp
#include "task1.h"

#define S 80

/*
*	������� ���������� ����� �� ���������� stdlib.h - qsort:
*
*	qsort(<��������� �� ������ ������� ������������ �������>,
*	<���������� ��������� � ����������� �������>,
*	sizeof(<��� ��������>),  //������ ������ �������� ������� � ������
*	<�������, ������� ���������� ��� ��������>);
*
*	������� ������ ����� ��������� ��������:
*	int compare(const void * val1, const void * val2 );
*/

int compare(const void *a, const void *b)
{
	if (strlen(*(char**)a) > strlen(*(char**)b))
		return 1;
	else
		return -1;
}

void lineSort(char *str[], int size)
{

	//char *sort[S];
	qsort(str, size, sizeof(char**), compare);
}

void printLines(const char *str[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s", str[i]);
		if (str[i][strlen(str[i]) - 1] != '\n')
			putchar('\n');
	}
}


/*
*	���� ����� ������� ������ �� ��������.
*	� �������� ������� ��� ��������� ����� ����
*	������� ��������� ����� �� ���������� stdlib.h - strcmp:
*
*	strcmp (<������ 1>, <������ 2>);
*
*	��� ������� �����:
*	- �������� ������ ����, ���� <������ 1>  ������, ��� <������ 2>
*	- 0, ���� <������ 1>  � <������ 2> �����
*	- �������� ������ ����, ���� <������ 1>  ������, ��� <������ 2>
*
*/