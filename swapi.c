#include <stdio.h>

int main(void)
{
 int g,h;
 printf("enter the number");
 scanf("%d%d",&g,&h);
 g=g+h;
 h=g-h;
 g=g+h;
 printf("after the number is %d%d",g,h);
 return(0);
}
