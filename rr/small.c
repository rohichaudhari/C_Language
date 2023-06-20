#include<stdio.h>
int main()
{
   	int a,b;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	if(a<b)
	{
	printf("\n  %d smallest value ",a);
	}
	else
	{
	printf("\n %d smallest value",b);
	}
	return 0;
}