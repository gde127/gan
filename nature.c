#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("enter the number");
scanf("%d",&n);
while(i<n)
{
sum += i;
++i;
}
printf("sum=%d",sum);
}
