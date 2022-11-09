#include<stdio.h>
int main()
{
int num,wage;
double hours,result;
scanf("%d %d",&num,&wage);
scanf("%lf",&hours);
result=wage*hours;
printf("NUMBER = %d\n",num);
printf("SALARY = U$ %0.2lf\n",result);
return 0;
}
