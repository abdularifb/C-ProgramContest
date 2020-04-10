#include<stdio.h>
int main()
{
	char s[] = "India";
	char *x = s;
	int c = 0;
	while(*x++)
		c++;
	printf("%d",c);
}

