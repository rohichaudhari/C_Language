#include<stdio.h>
int  add();
int main()
{
	int x;
	x=add;
	printf("x=%d",x);
}
	int add()
	{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<=10;i++)
	{
	printf("%d",i);
	x+=i;
	}
	printf("x=%d",x);
	return n;
}
