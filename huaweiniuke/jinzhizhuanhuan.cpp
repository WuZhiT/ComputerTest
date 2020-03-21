#include<stdio.h>
#include<string.h>
int dispose(char c)
{
	if (c >= 'a')
		return (c - 'a' + 10);
	else if (c >= 'A')
		return (c - 'A' + 10);
	else
		return (c - '0');
}
int dispose16(int n)
{
	int count = 1;
	for (int i = 0; i < n; i++)
	{
		count *= 16;
	}
	return count;
}

int main()
{
	char str[10];
	int len;
	int count;
	while (gets_s(str))
	{
		count = 0;
		len = strlen(str);
		for (int i = 2; i < len; i++)
		{
			count = dispose(str[i]) * dispose16(len - i - 1) + count;
		}
		printf("%d\r\n", count);
	}
	return 0;
}