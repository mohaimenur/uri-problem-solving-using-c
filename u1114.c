#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int x;
while(1)
{
scanf("%d",&x);
if(x==2002)
    {
printf("Acesso Permitido\n");
break;
}
else
printf("Senha Invalida\n");
}
return 0;
}
