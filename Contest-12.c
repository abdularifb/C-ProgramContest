#include<stdio.h>

int main()
{
	long n,m=0,mf=1,t;
	
	printf("\nEnter the N value:");
	scanf("%ld",&n);
	
	t = n;
	
	while(t>0)
	{
		m = m + (t%2) * mf;
		t = t/2;
		mf = mf * 10;
	} 
	
	printf("\nBinary Value :%ld",m);
	
}

