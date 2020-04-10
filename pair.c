#include<stdio.h>

int Findpair(int a[],int alen,int npos)
{
	int elem = a[npos];
	
	int i,j;
	
	int pairfound = 0;
	
	for(i=0;i<alen-1;i++)
	{
		if(i == npos ) 
			continue ;
			
		for(j=i+1;j<alen;j++)
		{
			if(j == npos)
				continue;
			
			if(a[i]+a[j] == elem)
			{
				printf("\n %d   %d ",a[i],a[j]);
				pairfound++;
			}
		}	
	}
	
	return pairfound ;
}

int main()
{
	
	int pairfound = 0;
	int i;
	
	int a[100];
	int alen;
	
	printf("\nEnter the Array Length:");
	scanf("%d",&alen);
	
	printf("\nEnter the Array Elements:");
	
	for(i=0;i<alen;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<alen;i++)
	{
		pairfound += Findpair(a,alen,i);
	}
	
	printf("\nPairs = %d",pairfound);
	
	if(pairfound == 0)
	{
		printf("\nNot Exist");
	}
}	

