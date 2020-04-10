#include<stdio.h>

int main()
{
	/*char intime[] = "02:10:35PM";*/
	
	char intime[20];
	
	char h[3];
	
	char ms[6];
	
	char ap;
	
	char res[9];
	
	int i,ch;
	
	printf("Enter the 12-Hour Time :");
	scanf("%s",&intime);
	
	h[0] = intime[0] , h[1] = intime[1] , h[2] ='\0';
	
	for(i=3;i<8;i++)
	{
		ms[i-3] = intime[i];
	}
	
	ms[i-3]='\0';
	
	ap = intime[8];
	
	ch = atoi(h);
	
	if(ch==12 && ap == 'A')
	{
		ch = 0;
	}
	
	else if(ap == 'P')
	{
		if(ch != 12)
			ch+=12;
	}
	
	sprintf(res,"%02d:%s",ch,ms);
	
	/*printf("\nExtracted Hour :%s",h);
	printf("\nExtracted Minutes Seconds :%s",ms);
	printf("\nExtracted AM/PM :%c",ap);	
	printf("\nConverted Hour : %d",ch);*/
	printf("\nConverted Time : %s",res);   
		
}



