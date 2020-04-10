#include<stdio.h>
int main()
{
	int max = 1;
	printf("%d",++max);
	if(max/max==1)
		exit(0);
	main();
}

