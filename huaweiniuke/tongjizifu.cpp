#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[1000];
	char a, b;
	int count = 0;
	gets_s(str);
	scanf_s("%c", &a);
	if (('A' <= a) && (a <= 'Z'))
		a = a - 'A' + 'a';
	if (('a' <= a) && ('z' >= a))
		b = a - 'a' + 'A';
	for (int i = 0; i < strlen(str); i++)
		if ((str[i] == a) || (str[i] == b))
			count++;
	printf("%d\n", count);
	return 0;
}