#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define SIZE 1024
#define IN 1
#define OUT 0


char * reverseWords(char * in, char *out)	//�������, ���������������� ����� �� in � ������������ �� � out
{	
	char *arrp[64];	
	int flag = OUT;
	int count = 0;	//���������� ���� == ���������� ��������� *arrp[]

	in[strlen(in) - 1] = '\0';
	//-----------------------------------------------------------------
	//������� � ���������� ������ ������� ���� ���� � ������ ����������
	for (int i = 0; in[i] != 0; i++)
	{
		if (in[i] != ' ' && flag == OUT)
		{
			flag = IN;
			arrp[count] = &in[i];
			count++;
		}
		else if (in[i] == ' ' && flag == IN)
		{
			flag = OUT;
		}
	}
	//-----------------------------------------------------------------
	//��������� ������������ ����� ������
	for (int i = 0, j = 0; ;)
	{

	}


	//-----------------------------------------------------------------



	return out;
}


int wordCount(char buf[])
{
	int flag = OUT;
	int count = 0;

	buf[strlen(buf) - 1] = '\0';

	for (int i = 0; buf[i] != 0; i++)
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			flag = IN;
			count++;
		}
		else if (buf[i] == ' ' && flag == IN)
		{
			flag = OUT;
		}
	}
	return count;
}

	




	

int main()
{
	int count = 0;
	char in[SIZE];	//������ char ��������
	char out[SIZE];	//������ char ��������
	//����������� �����
	printf("Enter a string for analysis: ");
	fgets(in, SIZE - 1, stdin);
	in[strlen(in) - 1] = '\0';
	//�������� ������� �������
	reverseWords(in, out);
	//������������ ������
	printf("%s\n", out);
	return 0;
}

