#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "task4.h"
#include "task1.h"
#define SIZEM 128
#define LSTR 512

int main(int argc, char * argv[])	
{
	char fin[256] = { 0 };
	char fout[256] = { 0 };
	
	switch (argc)
	{
	case 2:
	{
		strcpy(fin, argv[1]);
		strcpy(fout, argv[1]);
		break;
	}
	case 3:
	{
		strcpy(fin, argv[1]);
		strcpy(fout, argv[2]);
		break;
	}
	default:
	{
		strcpy(fin, "test.txt");
		strcpy(fout, "test.txt");
		break;

	}
	}

	FILE *mf;	
	char *str[SIZEM];	//������ ���������� �� ������	
	mf = fopen(fin, "r");
	if (mf == NULL) //�������� ������� ����� � ��� ��������
	{ 
		printf("error open file in\n"); 
		return -1; 
	}
	int i;	//������� ����������� �����
	for(i = 0; i < SIZEM; i++)
	{
		char *stroka;	//��������� �� ������
		stroka = (char*)malloc(LSTR * sizeof(char));	//�������� ������ ��� ������ � ���������� ����� � ���������		
		str[i] = fgets(stroka, LSTR, mf);	//������ ����� ������ �� �����
		stroka[strlen(stroka) - 1] = '\0';
		//�������� �� ����� ����� ��� ������ ������
		if (str[i] == NULL)
		{
			// ���������, ��� ������ ���������: �������� ���� ��� ��� ������ ������
			if (feof(mf) != 0)
			{
				//���� ���� ����������, ������� ��������� � ���������� ������ � ������� �� ������������ �����
				//printf("read end file in\n");
				break;
			}
			else
			{
				//���� ��� ������ ��������� ������, ������� ��������� �� ������ � ������� �� ������������ �����
				printf("err read file in\n");
				break;
			}
		}	
	}
	//��������� ����
	//printf("close file in\n");
	if (fclose(mf) == EOF)
	{
		printf("error close file in\n");
	}
	lineSort(str, i);
	mf = fopen(fout, "w");
	if (mf == NULL)
	{
		printf("error open file out\n");
		return -1;
	}
	printLinesToFile(str, i, mf);
	return 0;
}
