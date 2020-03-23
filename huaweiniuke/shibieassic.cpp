#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char c=0, str[127] = { 0 };
	int a = 0, count = 0;
	while (scanf_s("%c", &c) != EOF)
	{
		a = (int)c;
		if (str[a] == 0 && a != 10)
			count++;
		str[a] = c;
	}
	printf("%d\n", count);
	return 0;
}