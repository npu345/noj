#include<stdio.h>
int main()
{
    float n;
    int i,j;
    for (i = 4;;i++)
    {
        n = (float)i;
        for (j = 0; j < 5;j++)
        {
            n = n * 5.0 / 4.0 + 1;
        }
        if(n==(int)n){
            printf("%.0f %d", n, i);
            break;
        }
    }
}