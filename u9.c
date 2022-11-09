#include<stdio.h>
int main()
{
char name[50];
double salary,bonus,TOTAL,extra;
scanf("%s",&name);
scanf("%lf %lf",&salary,&bonus);
extra=(bonus*15)/100;
TOTAL=salary+extra;
printf("TOTAL = R$ %0.2lf\n",TOTAL);
return 0;
}
