#include <stdio.h>
int main()
{
    int N, D,i,j,sum,k,l;
    while(1)
    {
        scanf("%d%d", &N, &D);
        if(N==0 && D==0) break;

        int ara[D][N];
        for(i=0; i<D; i++)
        {
            for(j=0; j<N; j++)
                scanf("%d", &ara[i][j]);
        }

        for(k=0; k<N; k++)
        {
            for(l=0,sum=0; l<D; l++)
                sum+=ara[l][k];
            if(sum==D)
            {
                printf("yes\n");
                break;
            }
            else sum=0;
        }
        if(sum==0) printf("no\n");
    }
    return 0;
}
