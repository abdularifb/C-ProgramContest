#include<stdio.h>

float f1(int x,float y)
{
	return x * y;
}

float f2(int x,float y)
{
	return f1(x,y);
}

int main()
{
	float x = 2.51;
	int y = 10;
	
	printf("\n%.2f",f1(y,x));
	printf("\n%.2f",f2(y,x));
}

