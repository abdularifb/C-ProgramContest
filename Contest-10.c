#include<stdio.h>

int main()
{
	int n,count=0;
	
	printf("\nEnter the n value:");
	scanf("%d",&n);
	
	while(n>0)
	{
		
		count++;
		
		n = n/10;	 
	}
	
	printf("\nThe Total Number is : %d",count);	  
}

