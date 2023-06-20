#include<stdio.h>
int main()
{
	int a,b;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	if(a>b)
	{
	printf("\n\t a(%d)is greater than b(%d)",a,b);
	}
	else
	{
	printf("\n\t b(%d)is greater than a(%d)",b,a);
	}
	return 0;
}