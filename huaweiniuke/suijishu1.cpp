#include "stdio.h"
#include "string.h"

int test(int n, int* array, int count)
{
	for (int i = 0; i < count; i++)
	{
		if (n == array[i])
			return 1;
	}
	return 0;
}

void sortArray(int* array, int count)
{
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}

int main(void)
{
	int array[1000];
	int count = 0;
	int num1, num2;
	while (scanf_s("%d", &num1) != EOF)
	{
		count = 0;
		for (int i = 0; i < num1; i++)
		{
			scanf_s("%d", &num2);
			if (!test(num2, array, count))
			{
				array[count] = num2;
				count++;
			}
		}
		sortArray(array, count);
		for (int i = 0; i < count; i++)
			printf("%d\r\n", array[i]);
	}
	return 0;
}