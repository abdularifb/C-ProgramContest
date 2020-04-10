#include<stdio.h>
int main()
{
	int n,c,i,a[100],first,last,middle;
	printf("enter the no of elements in the list:");
	scanf("%d",&n);
	printf("enter the %d elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the elements to  be search:");
	scanf("%d",&c);
	first=0;
	last=n-1;
	middle=(first+last)/2;
while(first<=last)
{ 
 if(a[middle]<c)
   first=middle+1;
 else if(c==a[middle]){
   printf("%d is in the list",c,middle+1);
 break;
 }
 else
   last=middle-1;
   middle=(first+last)/2;
}
if(first>last)
     printf("%d is not  in the list",c); 
return 0;
}  	   

