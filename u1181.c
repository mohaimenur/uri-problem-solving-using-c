#include<stdio.h>
#include<stdlib.h>
int main()
{
    double M[12][12],sum=0.0;
    int L,r,c;
    char T[2];
    scanf("%d %s",&L,&T);
    for(r=0; r<12; r++)
    {
        for(c=0; c<12; c++)
        {
            scanf("%lf",&M[r][c]);
        }
    }
    for(c=0; c<12; c++)
    {
        sum= sum+M[L][c];
    }
    if(T[0]=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(T[0]=='M')
    {
        printf("%.1lf\n",sum/12);
    }
    return 0;
}
