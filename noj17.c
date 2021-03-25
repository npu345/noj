#include<stdio.h>
int Pow(int x,int n)//求X的n次方
{
    int i,m=1;
    for (i = 1; i <= n;i++)
      {  m = m * x;
    m = m % 1000;}
    return m;
}
int main()
{
    int x, a;
    scanf("%d%d", &x, &a);
    printf("%03d", Pow(x,a));
    return 0;
}