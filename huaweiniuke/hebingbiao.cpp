#include<stdio.h>
int main()
{
	int n;
	while (scanf_s("%d", &n) != EOF)
	{
		int array[1000] = { 0 };
		int i;
		int eval, val;
		for (i = 0; i < n; i++)
		{
			scanf_s("%d %d", &eval, &val);
			array[eval] += val;
		}
		for (i = 0; i < 1000; i++)
		{
			if(array[i])
				printf("%d %d\n", i, array[i]);
		}					
	}
	return 0;
}