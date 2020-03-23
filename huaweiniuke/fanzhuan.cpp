#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[1000] = { 0 };
	int i;
	int length;
	while (gets_s(str))
	{
		length = strlen(str);
		for (i = length-1; i >= 0; i--)
			printf("%c", str[i]);
	}
	printf("\n");
	return 0;

}