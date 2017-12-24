/*
���������, ������� ����������� ���������� ������������� � �����,
� ����� ��������� ������ ��� ������������ � ��� �������. 
��������� ���������� ������ �������� � ������ ������� ������������ 
� ������� �� �����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define M5 50 //����� ������

int main()
{
	int number;  //���-�� �����
	int m = 50;

	printf("Please, enter the number of relatives in the family: ");
	scanf("%d", &number);
	
	

	char **names;  // ��������� �� ��������� �� ������ ��������� ��� �������� ���	 
	//names = (char*)calloc(50*number, sizeof(char));  // ��������� ������ � �������������� ������

	//char names[*n][50];

	// ��������� ������ ��� ��������� �� ������
	names = (char**)malloc(number * sizeof(char*));
	// ���� ��������� �������
	for (int i = 0; i < number; i++)  // ���� �� �������
	{
		// ��������� ������ ��� �������� �����
	names[i] = (char*)malloc(M5 * sizeof(char));
	}

	char *young = NULL;
	char *old = NULL;

	int age = 0;
	int maxAge = 50;
	int minAge = 50;

	printf("Enter the name of your relative and his/her age. \n"
		"Please, do it in format: Name age. \n"
		"For example: Ann 25 \n\n");

	for (int i = 1, j = 0; i <= number; i++, j++)
	{
		printf("Your %d relative:  ", i);
		scanf("%s %d", names[j], &age);
		printf("\n");
		//names++;

		if (age > maxAge)
		{
			maxAge = age;
			old = names[j];
		}
		if (age < minAge)
		{
			minAge = age;
			young = names[j];
		}
	}

	
	printf("The youngest relative is %s. ", young);
	/*while(*young)
	{
		printf("%c", *young);
		*young++;
	}*/
	printf("He/she is %d years old. \n", minAge);


	printf("The oldest relative is %s. ", old);
	/*while (*old)
	{
		printf("%c", *old);
		*old++;
	}*/
	printf("He/she is %d years old. \n\n", maxAge);

	// ������� ������
	for (int i = 0; i < number; i++)  // ���� �� �������
		free(names[i]);   // ������������ ������ ��� ������
	free(names);
	return 0;
}