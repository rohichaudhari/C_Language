#include<stdio.h>
int main()
{
	int a[10],i,even=0,odd=0;
	for(i=0;i<10;i++)
	{
	printf(" enter value a[%d]",i);
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	if(a[i]%2==0)
	{
		printf("\n %d ",a[i]);
		even+=a[i];
	}
	else
	{
		printf("\n %d",a[i]);
		odd+=a[i];
	}
	printf("\n evensum=%d oddsum=%d ",even,odd);
	return 0;
}
