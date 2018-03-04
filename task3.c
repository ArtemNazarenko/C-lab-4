int isPalindrome(char * str)
{
	int length = strlen(str);
	int middel = (length - 1) / 2;
	char *first, *end;
	first = str;
	end = str + (length - 1);

	for (int i = 0; i < middel; i++)
	{
		if (*first == *end)
		{
			first++; end--;
		}
		else
		{
			return 0;
			break;
		}
	}
	return 1;
}