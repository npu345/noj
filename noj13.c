//VOL大学生乒乓球比赛
#include<stdio.h>
int main()
{
    int i, j, k;
    for (i = 'X'; i <= 'Z';i++)
    {
        if(i!='X')
        {
            for (j = 'X'; j <= 'Z';j++)
            {
                for (k = 'X'; k <= 'Z';k++)
                {
                    if(k!='X'&&k!='Z'&&i!=j&&j!=k&&i!=k)
                        printf("A=%c\nB=%c\nC=%c\n", i, j, k);
                }
            }
        }
    }
    return 0;
}