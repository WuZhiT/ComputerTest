#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[5000] = { 0 };
	int count=0;
	gets_s(str);
	int len;
	len = strlen(str)-1;
	for (int i = len; i >= 0; i--)
	{
		if (str[i] != ' ')
			count++;
		else
			break;
	}
	printf("%d\n", count);
	return 0;
}