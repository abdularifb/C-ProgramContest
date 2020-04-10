#include<stdio.h>

int main()
{
	int i,j,n,k,temp;
	
	printf("\nEnter the N value:");
	scanf("%d",&n);
	
	temp = n;
	
	for(i=1;i<=n;i++)
	{
		
		
		for(j=n;j>=1;j--)
		{
			printf(" ");
		}
		
		for(k=temp;k>=1;k--)
		{
			printf("*");
		}
		
		temp--;
		printf("\n");		
		
	}
}

