#include<stdio.h>
//判断是否为素数
int IsPrime(int m)
{
    int i;
    for (i = 2; i < m;i++)
        if(m%i==0)
            return 0;
    return 1;
}

int main()
{
    int i, j, m, n;
    scanf("%d%d", &m, &n);
    i = m <= n ? m : n;
    j = m >= n ? m : n;
    for (; i <= j;i++)
    {
        if(IsPrime(i))
            printf("%d ", i);
    }
    return 0;
}