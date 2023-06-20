#include<stdio.h>
int am(int amt)
{
	int a[]={2000,500,200,100,50,10,5,2,1},i,p;
	for(i=0;i<=8;i++)
	{
		if(amt>=a[i])
		{
				p=amt/a[i];
				printf("\n %d-%d",a[i],p);
	 			amt=amt%a[i];
		}
	}
}
int main()
{
	int a[]={2000,500,200,100,50,10,5,2,1},i,p,amt;
	printf("enter amt:");
	scanf("%d",&amt);
	am(amt);
	
	
}
