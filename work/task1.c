#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*http://vscode.ru/prog-lessons/sortirovka-metodom-vyibora-na-yazyike-si.html*/
//���������� 
void lineSort(char *str[], int size)
{
	//������� ������ �� '\0'
	for (int i = 0; i < size; i++)
	{
		if (str[i][strlen(str[i]) - 1] == '\n')
		{
			str[i][strlen(str[i]) - 1] = '\0';
		}
	}
	//������������ ����������
	for (int i = 0; i < size; i++)
	{
		char *tmp;
		int minPosition = i;
		for (int j = i + 1; j < size; j++)
		{

			if (strlen(str[minPosition]) > strlen(str[j]))
			{
				minPosition = j;
			}
		}
		tmp = str[minPosition];
		str[minPosition] = str[i];
		str[i] = tmp;
	}
}

void printLines(const char *str[], int size)	//�������, ���������� ������ � ������� ������� str
{
	for (int i = 0; i < size; i++)
	{
		printf("%s\n", str[i]);
	}
}