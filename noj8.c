#include<stdio.h>
int main()
{
	int y,m,d,m2;
	int n=0;
	scanf("%d-%d-%d",&y,&m,&d);
	if((y%4==0&&y%100!=0)||(y%400==0))m2=29;
	else m2=28;
	switch(m){
		case 1:n=d;break;
		case 2:n=d+31;break;
		case 3:n=31+m2+d;break;
		case 4:n=62+m2+d;break;
		case 5:n=92+m2+d;break;
		case 6:n=123+m2+d;break;
		case 7:n=153+m2+d;break;
		case 8:n=184+m2+d;break;
		case 9:n=215+m2+d;break;
		case 10:n=245+m2+d;break;
		case 11:n=276+m2+d;break;
		default :n=306+m2+d;
		}
	printf("%d\n",n);
	return 0;
}