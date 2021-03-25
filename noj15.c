#include<stdio.h>
int main()
{
    int i, j;
    double a[30], sum=0;
    a[0] = 1, a[1] = 1;
    for (i = 0; i < 25;i++)
    {
        a[i + 2] = a[i] + a[i + 1];
    }
    for (j = 1; j <= 20;j++)
    {
        sum = sum + a[j + 1] / a[j];
    }
    printf("%.6lf", sum);
    return 0;
}