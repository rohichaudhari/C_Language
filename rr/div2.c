#include<stdio.h>
int main()
{
	int a;
	printf("\n enter a:");
	scanf("%d",&a);
	if(a%5==0&&a%3==0)
	{
	printf("\n  divisible by 5 or 3",a);
	}
	else
	{
	printf("\n  not divisible by 5 or 3",a);
	}
	return 0;
}