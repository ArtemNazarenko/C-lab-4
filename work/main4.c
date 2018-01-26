#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "task4.h"
//#include "task1.h"
#define SIZEM 64
#define LSTR 512


int main()
{
	FILE *mf;	
	char *str[SIZEM];	//������ ���������� �� ������				
	if ((mf = fopen("test.txt", "r")) == NULL) //�������� ������� ����� � ��� ��������
	{ 
		printf("error\n"); 
		return -1; 
	}
	int i;	//������� ����������� �����
	for(i = 0; i < 64; i++)
	{
		char *stroka;	//��������� �� ������
		stroka = (char*)malloc(LSTR * sizeof(char));	//�������� ������ ��� ������ � ���������� ����� � ���������		
		str[i] = fgets(stroka, LSTR, mf);	//������ ����� ������ �� �����
		//�������� �� ����� ����� ��� ������ ������
		if (str[i] == NULL)
		{
			// ���������, ��� ������ ���������: �������� ���� ��� ��� ������ ������
			if (feof(mf) != 0)
			{
				//���� ���� ����������, ������� ��������� � ���������� ������ � ������� �� ������������ �����
				printf("\n�read end\n");
				break;
			}
			else
			{
				//���� ��� ������ ��������� ������, ������� ��������� �� ������ � ������� �� ������������ �����
				printf("\nerr read\n");
				break;
			}
		}			
		else
		{
			i++;
		}
	}
	//��������� ����
	printf("close file : ");
	if (fclose(mf) == EOF)
	{
		printf("error\n");
	}
	lineSort(str, i);
	//mf = fopen("test.txt", "w");	//�������� ����� � ������� ����� ������������� ������
	printLinesToFile(str, i, mf);
	return 0;
}

void lineSort(char *str[], int size)
{
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