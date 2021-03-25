#include<stdio.h>
int main()
{
    double m=0, n=0,i,j=0;
    int  a, b;
    scanf("%d%d", &a, &b);
    for (i = 1;;i++)
    {
        m = m + 1.0 / i;
        n = n + 1.0 / m;
        if(n<=a)
            j = i;
        if(n>=b)
            break;
    }
    printf("%d %d\n", (int)(j+1), (int)(i-1));
    return 0;
}