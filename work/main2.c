#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1024


int main()
{
	int count = 0;

	char in[SIZE];	//������ char ��������
	char out[SIZE];	//������ char ��������
	//����������� �����
	printf("Enter a string for analysis: ");
	fgets(in, SIZE - 1, stdin);
	//�������� ������� �������
	reverseWords(in, out);
	//������������ ������
	printf("%s\n", out);
	return 0;
}

