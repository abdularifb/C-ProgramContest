#include<stdio.h>

char *a(char *x)
{
	int l = strlen(x);
	int i;
	char c = x[0];
	
	for(i=1;i<l;i++)
	{
		x[i-1] = x[i];
	}
	
	x[i-1] = c;
	return x;
}

int main()
{
	char sample[] = "ABC";
	
	int i,l = strlen(sample);
	
	for(i=0;i<1;i++)
	{
		printf("\n%s",a(sample));
	}
}

