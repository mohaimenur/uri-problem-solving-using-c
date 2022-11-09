#include<stdio.h>
int main()
{
    double M[12][12],sum=0.0;
    int r,c,n=5,m=7;
    char O[2];
    scanf("%s",&O);
    for(r=0; r<12; r++)
    {
        for(c=0; c<12; c++)
        {
            scanf("%lf",&M[r][c]);
        }
    }
    for(r=7; r<12; r++)
    {
        for(c=n; c<m; c++)
        {
            sum=sum+M[r][c];
        }
        n--;
        m++;
    }
    if(O[0]=='S')
        printf("%.1lf\n",sum);
    else if(O[0]=='M')
        printf("%.1lf\n",sum/30);
    return 0;
}
