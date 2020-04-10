#include<stdio.h>

void f(int q,int p)
{
	printf("%d   %d ",p,q);
}

int main()
{
	int p = 5,q = 3,s = 1;
	
	f(p--,q++);	   
}

