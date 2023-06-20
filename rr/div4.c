#include<stdio.h>
int main()
{
	int a;
	printf("\n enter a:");
	scanf("%d",&a);
	if(a%5==0)
	{
	printf("\n %d divisible by 5",a);
	}
	else
	{
	printf("\n %d not divisible by 5",a);
	}
	return 0;
}