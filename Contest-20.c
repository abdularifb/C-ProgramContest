#include<stdio.h>

int main()
{
	int i,j,n=3;
	int m[10][10];
	
	int diff = 0;
	
	printf("\nEnter the matrix");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n%d",m[i][j]);
		}
	}
	
	
	for(i=0,j=n-1;i<n;i++,j--)
	{
		printf("\n %d  %d -> (%d)    %d  %d -> (%d) ",i,i,m[i][i],i,j,m[i][j]);
		
		diff = diff + (m[i][i] - m[i][j]);
	}
	
	
	if(diff<0)
		diff = -diff;
	
	printf("\nAbsolute diff : %d",diff);
}

