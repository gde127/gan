#include<stdio.h>
void main()
{
int i,n,count=0;
printf("enter the total value");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("count=%d",count);
}
