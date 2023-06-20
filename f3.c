#include<stdio.h>
int add();
int main()
{
   add();
}
	int add()
	{
	int i, n=10, total=0;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<=10;i++)
	{
	printf(" %d ",i);
	total+=i;
	}
	printf("\ntotal=%d",total);
	}
