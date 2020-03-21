#include<stdio.h>
#include<string.h>
int main()
{
	long num;
	int i;
	while (scanf_s("%d", &num) != EOF)
	{
		for (i = 2; i <= num; i++)
		{
			while (num % i == 0)
			{
				printf("%d ", i);
				num = num / i;
			}	
		}
		printf("\n");
	}
	return 0;
}