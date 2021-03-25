#include<stdio.h>
int main()
{
    int  C[9], i;
    for (i = 12; i <= 329;i++)
    {
        int x, y, z,k,m,n;
        x = i;
        y = 2 * i;
        z = 3 * i;
        
        for (k = 2; k >= 0;k--)
        {
            C[k] = x % 10;
            C[k + 3] = y % 10;
            C[k + 6] = z % 10;
            x = x / 10;
            y = y / 10;
            z = z / 10;
        }
        int sum=0,sum1=0;
        for (n = 0; n < 9;n++)
        {
            for (m = 0; m < 9;m++)
            {
                sum = sum + (C[m] == C[n]);
            }
            sum1 = sum1 + C[n];
        }
        if(sum==9&&sum1==45)
            printf("%03d %03d %03d\n", i, 2 * i, 3 * i);
        
    }
    return 0;
}