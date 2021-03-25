//求能整除n的数a
//求上数的除数b，b各位数不相同且与a各位数不同
#include<stdio.h>
int main()
{
    int i,A[50000],B[50000],j=0,n0;//n的倍数为A，除数为B
    scanf("%d", &n0);
    for (i = 1234; i <= 98765;i++)
    {
        if(i%n0==0){
            A[j] = i;
            B[j] = i / n0;
            j++;
        }
    }
    //for (i = 0; i <= j;i++)
     //  printf("%d", A[i]);
    int C[10];         //将十位数字给C
    for (i = 0; i < j;i++)//穷举
    {
        int m,n,k;
        n = B[i];
        m = A[i];
        for (k = 0; k < 10;k++)//数组C初始化为0
        {
            C[k] = 0;
        }
            for (k = 4; k >= 0; k--)
            {
                C[k] = m % 10;
                //   printf("C%d=%d\t",k, C[k]);
                m = m / 10;
                C[5 + k] = n % 10;
                n = n / 10;
            }
        /*for(k=0;k<10;k++)
            printf("%d", C[k]);
        printf("\n");*/
        int sum = 0;
        for (m = 0; m < 10;m++)
        {
            for (n = 0; n < 10;n++)
            {
                sum = sum + (C[m] == C[n]);
            }
        }
        if(sum==10)
            printf("%05d/%05d=%d\n",A[i],B[i],n0);
    }
        return 0;
}