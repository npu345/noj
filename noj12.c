//判断是否为素数
#include<stdio.h>
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
    int cnt=0, i, sum=0;
    for (i = 800; i >= 500; i--)
    {
        if(IsPrime(i)){
            cnt++;
            sum = ((cnt % 2 == 0) ? -1 : 1) * i + sum;
        }
    }
    printf("%d %d",cnt,sum);
}