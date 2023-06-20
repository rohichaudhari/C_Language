#include<stdio.h>
int main()
{
	int a,b;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	if((a*b)%(a+b)==0)
	{
	printf("\n multiplication is divisible by  their addition",a,b);
	}
	else
	{
	printf("\n multiplication is not divisible by  their addition",b,a);
	}
	return 0;
}
