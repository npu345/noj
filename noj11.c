//迭代求根
#include<stdio.h>
int main()
{
    float a, xn=1, xn1, d=12;
    scanf("%f", &a);
    while(d>0.00001){
        xn1 = (xn + a / xn) / 2.0;
        d = xn >= xn1 ? xn - xn1 : xn1 - xn;
        xn = xn1;
    }
    printf("%.5f", xn);
    return 0;
}