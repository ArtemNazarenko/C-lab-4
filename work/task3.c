#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char * str)	//�������, ����������� str (����� ���� 0, ���� 1)
{
	int len = strlen(str);
	/*if(str[len - 1] == '\n')
	{
		str[len - 1] = '\0';	//�������� '\n' �� '\0'
	}*/
	len = strlen(str);
	char *levP;	//��������� �� ������ ������� ������
	char *praP;	//��������� �� ��������� ������� ������
	levP = &(str[0]);
	praP = &(str[len - 1]);
	while ((levP != praP) && (levP != (praP - 1)))
	{
		//��������� ��� ����� � ������ �������
		/*for (int i = 0; i <= len; i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
		*/

		//���������� ������� � ������ ����� ����������
		if ((*levP) == ' ' || (*levP) == ',' || (*levP) == '.' || (*levP) == '\'' || (*levP) == '?' || (*levP) == '!' || (*levP) == '\n' || (*levP) == '-' || (*levP) == '\"')
		{
			levP++;
			continue;
		}
		//���������� �������
		if ((*praP) == ' ' || (*praP) == ',' || (*praP) == '.' || (*praP) == '\'' || (*praP) == '?' || (*praP) == '!' || (*praP) == '\n' || (*praP) == '-' || (*praP) == '\"')
		{
			praP--;
			continue;
		}
		//printf("*levP = %c, *praP = %c\n", *levP, *praP);
		//��������� ������� �� ��������� ���� �����, ���� �� ����� ��������� 0
		if ((*levP == (*praP + 32)) || (*praP == (*levP + 32)) || (*levP == *praP))
		{
			levP++;
			praP--;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}