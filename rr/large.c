#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	printf("\n  enter c:");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\n %d largest value",a);
		}
		else
		{
			printf("\n %d largest value",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n %d largest value",b);
		}
		else
		{
			printf("\n %d largest value",c);
		}
	}
	return 0;
}

	

		