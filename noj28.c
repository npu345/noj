#include<stdio.h>
int main()
{
    int k, x=10, y=1;
    double m = 1, n = 1000;
    scanf("%d", &k);
    for (y = k+1;y<=n;y++)
    {
        for (x = 1;m>=(1 / (double)k);x++)
        {
            if((k*(x+y))==(x*y))
            {
                printf("1/%d=1/%d+1/%d\n", k, x, y);
            }
             m = 1 / (double)x + 1 / (double)y;
             n = x;
        }
    }
    return 0;
}