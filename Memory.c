#include<stdio.h>
int main()
{
	char h[] = "Hello World.";
	char *c = h;
	*(c+3) ='\0';
	printf("%s",h);
}

