//立方和的乐趣
#include<stdio.h>
int main()
{
    int n,a0,i,an;
    //int sum;
    scanf("%d", &n);
    a0 = n * n - n + 1;
    an = a0;
    //sum = a0;
    printf("%d*%d*%d=%d=%d", n, n, n,n*n*n, a0);
    for (i = 1; i < n;i++){
        an = an + 2;
    printf("+%d", an);
    //sum = sum + an;
    }
    //printf("\t%d", sum);
    return 0;
}