#include<stdio.h>

int main()
{
	int a[10];
	int n,i;
	
	int p = 0;
	int q = 0;
	int r = 0;
	
	float pos,neg,zero;
	
	printf("Enter the N value :");
	scanf("%d",&n);
	
	printf("\nEnter the values of the Array :");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			p++;		
		}
		
		if(a[i]<0)
		{
			q++;
		}
		
		if(a[i]==0)
		{
			r++;
		}
		
	}
	
	pos = (float)p/n ;
	
	printf("\n%6f",pos);
	
	neg = (float)q/n;
	
	printf("\n%6f",neg);
	
	zero = (float)r/n;
	
	printf("\n%6f",zero);
	
	
}

