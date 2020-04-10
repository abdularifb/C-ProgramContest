#include<stdio.h>

void print(int p,char m)
{
	printf("%d %c ",p,m);
}

int main()
{
	int p = 65;
	char m = 'C';
	
	print(p,m);
	
	print(m,p);
}

