//Написать программу, которая с помощью массива указателей выводит слова
//строки в обратном порядке.
//Пример: "буря мглою небо кроет" -> "кроет небо мглою буря"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task2.h"
#define size 100

int main()
{
	int i = 0;
	char in[size];
	char out[size] = { 0 };
	puts("Enter your text:");
	fgets(in, size, stdin);
	in[strlen(in) - 1] = '\0';
	puts("   | | | ");
	puts("   V V V ");
	printf("%s",reverseWords(in, out));
	puts("\n\n");
	system("pause");
	return 0;
}