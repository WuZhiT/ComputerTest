#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int array[20] = {0};
	int num;
	scanf_s("%d", &num);
	for (; num > 0; num /= 10)
		if (!array[num % 10])
		{
			array[num % 10] = 1;
			printf("%d\n", array[num % 10]);
			printf("%d", num % 10);
		}
	return 0;
}