#include "task2.h"
#include <string.h>
#define size 100
#define IN 1
#define OUT 0

char *reverseWords(char *in, char *out)
{
	int i = 0, j = 0, k = 0;
	int inWord = 0;
	char *pword[size];

	while (in[i])
	{
		if (in[i] != ' ' && inWord == OUT)
		{
			inWord = IN;
			pword[j] = &in[i];
			j++;
		}

		else if (in[i] == ' ')
		{
			inWord = OUT;	
		}
		i++;
	}

	while (j--)
	{
		while (*pword[j] != ' ')
		{
			if (*pword[j] == '\0')
				break;

			out[k] = *pword[j];
			*(pword[j]++);
			k++;
		}
		out[k] = ' ';
		k++;
	}
	k--;
	out[k] = '\0';

	return out;
}