#include<stdio.h>

int main()
{
	int n,i;
	
	int height = 0;
	
	printf("\nEnter the N value:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
	
		if(i%2==0)
		{
			height+=1;
		}
		
		if(i%2==1)
		{
			height*=2;
		}
	
	}
	
	printf("\nHeight is :%d",height);
	

}

