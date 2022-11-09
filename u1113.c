#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int a,b;
while(1)
{
scanf("%d %d",&a,&b);
if(a==b)break;
if(a>b)
printf("Decrescente\n");
else printf("Crescente\n");
}
return 0;
}
