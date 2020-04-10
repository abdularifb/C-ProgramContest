#include<stdio.h>

long m(int n)
{
	if(n<=0)
		return 1;
	return n * m(n-1);
}

int main()
{
	printf("%ld",m(6));
}

