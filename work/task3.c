int isPalindrome(char * str)	//�������, ����������� str (����� ���� 0, ���� 1)
{
	int len = strlen(str);
	str[len - 1] = '\0';	//�������� '\n' �� '\0'
	len--;
	char *levP;	//��������� �� ������ ������� ������
	char *praP;	//��������� �� ��������� ������� ������
	levP = &(str[0]);
	praP = &(str[len - 1]);
	for(; (levP != praP) && (levP != (praP - 1)); levP++, praP--)
	{
		printf("*levP = %c, *praP = %c\n", *levP, *praP);
		if (*levP != *praP)
		{
			return 0;
		}
	}
	return 1;
}