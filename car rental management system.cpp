#include<stdio.h>
#include<string.h>
int main()
{
	
	int days;
	int bill; 
	// dln=driving license number
	char dln[18],i;
	char name[100];
	//dlnl=driving license number length
	int dlnl=0;
	int type;
	int b=0,c=0,d=0,e=0,f=0;
	//ag= customer age
	int ag;
	printf("enter the driving license number :");
	gets(dln);
	dlnl=strlen(dln);
	{
		if((dlnl>14)&&(dlnl<19))
		{
			printf("entered the driving number is valid ");
			printf("\nenter customer name:");
			gets(name);
			b=b+1;
		}
		else 
		printf("entered driving license number is invalid");
		
    }
    if(b!=0)
    {
    	printf("\nenter customer age :");
    	scanf("%d",&ag);
    }
    if ((ag>20)&&(ag<75)&&(b!=0))
     {
     	d=d+1;
	 }
    if((d!=0)&&(b!=0))
    {
    printf("\nselect car type ");
    printf("\n1.fixed 2.optional");
    scanf("%d",&type);
    }
    if(type==1)
    {
    	printf("\nenter how many days :");
    	scanf("%d",&days);
    	{
    		bill=days*1000;
    		printf("make payment");
    		{
    			e=e+1;
			}
		}
	}
	if(e!=0)
	{
		printf("\nyour car is booked and drive carefully");
	}
    if(type==2)
    {
    	printf("pay advance payment");
    	f=f+1;
    }
    if(f!=0)
    {
    	printf("your car is booked and drive carefully");
	}

}

 
