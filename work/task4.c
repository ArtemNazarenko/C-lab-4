#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LSTR 512


void printLinesToFile(const char *str[], int size, FILE *fp)
{
	for (int i = 0; i < size; i++)
	{
		fwrite(str[i], sizeof(char), strlen(str[i]), fp);
		fputc('\n', fp);
	}
	fclose(fp);
}

