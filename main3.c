//Написать программу, которая запрашивает строку и определяет, не является
//ли строка палиндромом(одинаково читается и слева направо и справа налево)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task3.h"
#define size 30

int main()
{
	char str[size] = { 0 };
	puts("Enter your string: ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';

	if (isPalindrome(str)==1)
	{
		puts("Your string is palindrome");
	}
	else
	{
		puts("Your string is not a palindrome");
	}

	system("pause");
	return 0;
}