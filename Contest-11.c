#include<stdio.h>

int main()
{
	int n,m;
	
	printf("\nEnter the n value:");
	scanf("%d",&n);
	
	while(n>0)
	{
		
		m = n % 10;	  
		
		printf("%d",m);
		
		n = n /10;	
		
		   
	}
}

