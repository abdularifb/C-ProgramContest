#include<stdio.h>
int main()
{
	int m =6;
	printf("M1 = %d M2 = %d",m,change(m));	  
}

int change(int m)
{
	return m+= ++m;
}
	

