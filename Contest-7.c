#include<stdio.h>

int main()
{
	int m=10,*mptr = &m ,**ptr = &mptr;
	
	int n=20,*nptr = &n ,**prt = &nptr;
	
	m = **prt + *mptr;
	
	n = *mptr * **prt;
	
	printf("%d  %d ",n ,m);
}

