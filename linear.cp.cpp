#include<stdio.h>
int main()
{
	int n,c,i,a[100];
	printf("enter the no of elements in the list:");
	scanf("%d",&n);
	printf("enter the %d elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the elements to  be search:");
	scanf("%d",&c);
	if(a[i]==c)
	{
	    printf("%d is in the list",c);
	}
	else
	{
		printf("%d is not in the list",c);
	}
	return 0;
}


