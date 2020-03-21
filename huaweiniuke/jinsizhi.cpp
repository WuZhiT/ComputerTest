#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    double num;
    scanf_s("%lf", &num);
    printf("%d", (int)(num + 0.5));
    return 0;
}