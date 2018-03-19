#include <stdio.h>

int main()
{
    int i,c=0,a=1,p=2,n;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=1)
    {
        n=n/2;
        c++;
    }
    for(i=0;i<c;i++)
    {
        a=a*p;
    }
    printf("%d",a);
    return 0;
}
