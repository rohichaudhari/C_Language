#include<stdio.h>
int main()
{
	int a,b;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
                   if(a*b%3==0 && a*b%7==0)
	{
	printf("\n  multiplication is divisible by 3 or 7",a,b);
	}
	else
	{
	printf("\n  multiplication is not divisible by 3 or 7",b,a);
	}
	return 0;
}