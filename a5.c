#include<stdio.h>
int main()
{
	float price,qty,amt,disc,disamt,gst,billamt;
	char product;
	printf("enter product:");
	scanf("%c",&product);
	{
		price=700;
		qty=price*100;
		amt=price*qty;
		disc=amt*0.10;
		disamt=disc;
		gst=disamt*0.18;
		billamt=disamt+gst;
		printf("\n %f",billamt);
	}
	return 0;
}
	
		
	