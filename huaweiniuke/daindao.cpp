#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int num;
	int a = 0;
	scanf_s("%d", &num);
	while (num) 
	{		
		a = num % 10;
		num /= 10;
		printf("%d",a);
	}
	printf("\n");
	return 0;
}