#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZEM 64
#define SIZES 1024



int main()
{
	int count = 0;
	char buf[SIZEM][SIZES];	//��������� ������ char
	char *pbuf[SIZEM];	//������ ���������� �� ������� char

	for (int i = 0; i < SIZEM; i++)
	{
		printf("Enter a string for analysis: ");
		fgets(buf[i], SIZES - 1, stdin);
		buf[i][strlen(buf[i]) - 1] = '\0';
		if (strlen(buf[i]) == '\0')
		{
			break;
		}
		pbuf[i] = buf[i];	//���������� � ������� i ������� ���������� pbuf ����� ������� buf[i]
		count++;
	}
	lineSort(pbuf, count);	
	printLines(pbuf, count);
	return 0;
}

