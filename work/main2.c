#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define SIZE 1024



char * reverseWords(char * in, char *out)	//�������, ���������������� ����� �� in � ������������ �� � out
{
	
	






	return out;
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

