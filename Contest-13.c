#include<stdio.h>

int main()
{
	long n,m=0,mf=1,t;
	
	printf("\nEnter the N value:");
	scanf("%ld",&n);
	
	t = n;
	
	while(t>0)
	{
		m = m + (t%8) * mf;
		t = t/8;
		mf = mf * 10;
	} 
	
	printf("\nOctal Value : %ld",m);
}

