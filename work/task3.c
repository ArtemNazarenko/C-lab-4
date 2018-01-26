int isPalindrome(char * str)	//�������, ����������� str (����� ���� 0, ���� 1)
{
	int len = strlen(str);
	str[len - 1] = '\0';	//�������� '\n' �� '\0'
	char *levP;	//��������� �� ������ ������� ������
	char *praP;	//��������� �� ��������� ������� ������

	for(levP = &str[0], praP = &str[len - 2]; (levP != praP) && (levP != praP - 1); levP++, praP--)
	{
		if (*levP != *levP)
		{
			return 0;
		}
	}
	return 1;
}