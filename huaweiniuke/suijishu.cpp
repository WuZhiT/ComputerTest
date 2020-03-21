#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void discompare(int s, int array1[])
{
	int tmp;
	for(int i=0;i<s;i++)
		for (int j = 0; j < s - 1 - i; j++)
			if (array1[j] > array1[j + 1])
			{
				tmp = array1[j];
				array1[j] = array1[j + 1];
				array1[j + 1] = tmp;
			}
}
int  delrepeat(int n, int array2[])
{
	int i, j;
	for(i=1,j=1;i<n;i++)
	{
		if (array2[i - 1] != array2[i])
		{
			array2[j] = array2[i];
			j++;
		}
	}
	return j;
}
int main()
{
	int *array=NULL;
	int N;
	while (scanf_s("%d", &N) != EOF)
	{
		array=(int *)malloc(N * sizeof(int)); 
		for (int i = 0; i < N; i++)
			scanf_s("%d", array+i);
	}
	discompare(N, array);
	N=delrepeat(N, array);
	for (int i = 0; i < N; i++)
		printf("%d\n",array[i]);
	return 0;
}