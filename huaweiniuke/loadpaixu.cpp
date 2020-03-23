#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
#pragma warning(disable:4996)
void exchangestr(char* str1, char* str2)
{
	char temp[100] = { 0 };
	strcpy_s(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
}
#pragma warning(disable:4996)
int main()
{
	char str[1000][100] = { 0 };
	int n;
	int i, j;
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		gets_s(str[i]);
		
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (strcmp(str[i], str[j]) < 0)
				exchangestr(str[i], str[j]);
		}
	}
	for (i = 0; i <= n; i++)
		printf("%s\n", str + i);
	return 0;
}