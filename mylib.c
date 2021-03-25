//判断是否为素数
int IsPrime(int m)
{
    int i;
    for (i = 2; i < m;i++)
        if(m%i==0)
            return 0;
    return 1;
}

//取最大值max
int Max(int a,int b)
{
    int ans;
    ans = a >= b ? a : b;
    return ans;
}