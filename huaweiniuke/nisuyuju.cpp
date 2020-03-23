#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i, j;
	char str1[1000] = { 0 };
	char str2[1000] = { 0 };
	int len = 0;
	int n1 = 0, n2 = 0;
	gets_s(str1);
	len = strlen(str1);
	for (i = 0; i < len; i++)
	{
		if (str1[len - 1 - i] != ' ')
		{
			n1++;
		}
		else
		{
			for (j = 0; j < n1; j++)
			{
				str2[n2 + j] = str1[len - i + j];
			}
			str2[n2 + j] = ' ';
			n2 = n2 + n1 + 1;
			n1 = 0;
		}
	}
	for (j = 0; j < n1; j++)
	{
		str2[n2 + j] = str1[len - i + j];
	}
	str2[n2 + j] = ' ';
	n2 = n2 + n1 + 1;
	n1 = 0;
	str2[i] = 0;
	printf("%s", str2);
	return 0;
}