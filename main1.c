#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"

#define N 10
#define M 30

/*�������� ���������, ������� ��������� ������������ ������ ��������� 
  ����� � ����������, � ����� ��������� �� � ������� ����������� ����� ������.

    ---���������---

������ �������� �� ��������� ������ ������ � ������������ � ��������� ���������� ������. 
������������ ���������� �������� � ���������� ������� ���������� �� char. 
����� ��������� ����� ��������� ��������� �������� � ������� � ������� ������ � ������������ � ���������������� �����������.*/

int main()
{
	int i = 0;
	char mas[N][M] = { 0 };
	char *str[M] = { 0 };
	puts("Enter you text:");
	while ((i < N) && (*fgets(mas[i], M, stdin) != '\n'))
	{
		str[i] = mas[i++];
	}
	lineSort(str, i);
	puts("\nSort text:\n");
	printLines(str, i);

	system("pause");
	return 0;
}

