#include<stdio.h>
int main()
{
	int unit, total;
	printf("\n enter unit:");
	scanf("%d",&unit);
	if(unit<=100)
	{
	total=50+unit*0.60;
	printf("\n total=%d",total);
	}
	else if(unit<=300)
	{
	total=50+60+(unit-100)*0.8;
	printf("\n total=%d",total);
	}
	else 
	{
	total=50+60+160+(unit-300)*0.9;
	printf("\n total=%d",total);
	}
	if(total>300)
	{
		total = total + (total *0.15);
		printf("\n additional; bill =%d",total);
	}	
	return 0;
}