#include<stdio.h>
int st()
{
	int i,j,a=11;
	for(i=11;i<=15;i++)
	{
		for(j=11;j<=15;j++)
		{
		printf("\n%d",a);
		a++;
		}
	}
	a=a+5;
	printf("\n");
}
int main()
{
st();
}
