#include<stdio.h>

int main()
{
	int a,b,c,n,t,i;
	
	printf("\nEnter the N value :");
	scanf("%d",&n);
	
	t = n;
	
	a = t % 10;
	t = t/10;
	
	b = t % 10;
	t = t/10;
	
	c = t;
	
	for(i=1;i<=10;i++)
	{
		printf("\n%2d x %2d = %2d      %2d x %2d = %2d       %2d x %2d = %2d ",i,c,i*c,i,b,i*b,i,a,i*a);
	}

}

