#include<stdio.h>
int main()
{
    int a, b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d.", a / b);//输出整数位
    a = a % b;
    for (int i = 1; i < c;i++)
    {
        printf("%d", a * 10 / b);
        a = a * 10 % b;
    }
    printf("%d", (10 * a % b * 10 / b < 5) ? a * 10 / b : a * 10 / b + 1);

    return 0;
}