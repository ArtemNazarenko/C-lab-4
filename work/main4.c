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
	char fin[32] = { 0 };
	char fout[32] = { 0 };
	
	if (argc == 2)
	{
		strcpy(fin, argv[1]);
		strcpy(fout, argv[1]);
	}
	else if (argc == 3)
	{
		strcpy(fin, argv[1]);
		strcpy(fout, argv[2]);
	}
	else if (argc != 2 && argc != 3)
	{
		strcpy(fin, "test.txt");
		strcpy(fout, "test1.txt");
	}


	FILE *mf;	
	char *str[SIZEM];	//������ ���������� �� ������	
	mf = fopen(fin, "r");
	if (mf == NULL) //�������� ������� ����� � ��� ��������
	{ 
		printf("error open\n"); 
		return -1; 
	}
	int i;	//������� ����������� �����
	for(i = 0; i < 64; i++)
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
				printf("\nread end\n");
				break;
			}
			else
			{
				//���� ��� ������ ��������� ������, ������� ��������� �� ������ � ������� �� ������������ �����
				printf("\nerr read\n");
				break;
			}
		}	
	}
	//��������� ����
	printf("close file\n");
	if (fclose(mf) == EOF)
	{
		printf("error close file\n");
	}
	lineSort(str, i);
	mf = fopen(fout, "w");
	if (mf == NULL)
	{
		printf("error open file\n");
		return -1;
	}
	printLinesToFile(str, i, mf);
	return 0;
}
