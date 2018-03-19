
#include <stdio.h>

int main(void) 
{
	int a,b,pro,flag=0,i;
	printf("enter the two number:");
	scanf("%d %d",&n1,&n2);
	pro=n1*n2;
	for(i=1;i<=pro/2;i++)
	{
		if(i*i==pro)
		{
			flag=1;
			break;
		}
	
	}
	
	if(flag==1)
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}

