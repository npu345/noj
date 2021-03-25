#include<stdio.h>
int main()
{
    int i,t, alpha=1, beta=0,m;
    scanf("%d", &t);
    for (i = 1; i <= t;i++)
    {
        m = beta;
        beta = 3 * alpha + 2 * beta;
        alpha = m;
    }
    printf("%d %d", alpha, beta);
    return 0;
}