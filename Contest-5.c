#include<stdio.h>

int multiply(int a,int b)
{
	return (printf("%d",(++a * --b)));
}


int main()
{
	return !multiply(10,9);	   
}

