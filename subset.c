int Apos(int a[],int n,int alen)
{
	int i;
	int res = -1;
	
	for(i=0;i<alen;i++)
	{
		if(a[i]==n)
		{
			res = 1;
			break;
		}
	}
	
	return res;	  
}

int main()
{

	int i,alen,blen;
	int a[100],b[100];
	int subset = 1;
	
	printf("\nEnter the A Array Length");
	scanf("%d",&alen);
	
	printf("\nEnter the Elements of the Array");
	
	for(i=0;i<alen;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the B Array Length");
	scanf("%d",&blen);
	
	printf("\nEnter the Elements of the Array");
	
	for(i=0;i<blen;i++)
	{
		scanf("%d",&b[i]);
	}
	
	
	for(i=0;i<blen;i++)
	{
		if(Apos(a,b[i],alen) == -1)
		{
			subset = -1;
		}
	}
	
	if(subset == 1)
	{
		printf("\nB is a Subset of A");
	}
	
	else
	{
		printf("\nB is not Subset of A");
	}
	

}

