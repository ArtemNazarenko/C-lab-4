#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "task4.h"
#include "task1.h"
#define SIZEM 64
#define LSTR 512

/* argc ������ ���������� ����������, � argv[] ��������� �� ��� ���������.
��������, ���� �� �������� ����������� ���� "fgets_example param1 param2", 
�� argc ����� ����� 3, � argv[] = {"fgets_example", "param1", "param2"}*/
int main(int argc, char* argv[])	
{
	/*char fin[] = argv[0];//���� ��� ������
	char fout[] = argv[1];//���� ��� ������
	*/

	FILE *mf;	
	char *str[SIZEM];	//������ ���������� �� ������
	mf = fopen("test.txt", "r");
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
	mf = fopen("test1.txt", "w");
	if (mf == NULL)
	{
		printf("error open file\n");
		return -1;
	}
	printLinesToFile(str, i, mf);
	return 0;
}
