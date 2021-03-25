#include<stdio.h>
int main()
{
    double i,ans=0;
    int m, n;
    scanf("%d%d", &n, &m);
    for (i = (double)n; i <= (double)m;i++)
    {
        ans = ans + 1.0 / i / i;
    }
    printf("%.5lf", ans);
    return 0;
}