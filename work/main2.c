/*
���������, ������� � ������� ������� ���������� ������� �����
������ � �������� �������.
������: "���� ����� ���� �����" -> "����� ���� ����� ����"
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task2.h"


int main()
{
	char in[SIZE2] = { '\0' };
	char out[SIZE2] = { '\0' };

	printf("Please, enter the string: \n");
	fgets(in, SIZE2, stdin);
	in[strlen(in) - 1] = '\0';
	printf("\n");

	printf("Words in reverse order: \n");
	printf("%s", reverseWords(in, out));
	printf("\n\n");
	//int r = strlen(reverseWords(in, out));
	//printf("%d \n", r);

	return 0;
}