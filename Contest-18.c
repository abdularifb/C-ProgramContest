#include<stdio.h>

int main()
{
	int a,b,c,d,n,t,i,temp;
	
	printf("\nEnter the N value :");
	scanf("%d",&n);
	
	t = n;
	
	a = t % 10;
	t = t/10;
	
	b = t % 10;
	t = t/10;
	
	c = t % 10;
	t = t/10;
	
	d = t;
	
	if(a>b)
	{
		temp = a;
		a = b;
		b = temp;	 	    
	}
	
	if(a>c)
	{
		temp = a;
		a = c;
		c = temp;	 	    
	}
	
	if(a>d)
	{
		temp = d;
		d = c;
		c = temp;	 	    
	}
	
	if(b>c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	
	if(b>d)
	{
		temp = b;
		b = d;
		d = temp;
	}
	
	if(c>d)
	{
		temp = c;
		c = d;
		d = temp;
	}
	
	printf(" %d  %d %d %d",a,b,c,d);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%2d x %2d = %2d      %2d x %2d = %2d      %2d x %2d = %2d      %2d x %2d = %2d",i,a,i*a,i,b,i*b,i,c,i*c,i,d,i*d);
	} 
	

}

