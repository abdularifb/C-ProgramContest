#include<stdio.h>

int main()
{
	int n,d1,d2;
	
	printf("\nEnter the n value:");
	scanf("%d",&n);
	
	d1 = n % 10;
	
	n = n/10;
	
	d2 = n % 10;
	
	printf("\nThe value is:%d ",d1+d2);
}

