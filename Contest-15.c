#include<stdio.h>

int main()
{
	int i;
	
	char *p[] = {"Ramu","Raj","Ramesh","Ganesan"};
	
	char **ptr = p;
	
	printf("%d",strlen(*ptr));
}

