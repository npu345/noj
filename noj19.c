#include<stdio.h>
int main()
{
    char c;
    int n=0,m=0,j=0;
    c = getchar();
    while(c!='\n'){
        if(c=='.')
            break;
        if(c>='0'&&c<='9')
            n++;
        if((c>='0')&&c<='9'&&c=='0')
        {
            j = 1;
            break;
        }
        c = getchar();
    }
    if(j==1)
        printf("%d", m);
    else
        printf("%d", n);
    return 0;
}