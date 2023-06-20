#include<stdio.h>
int add();
int main()
{
	int x;
	printf("hello \n");
	x=add();
	printf("add:x=%d \n",x);
	printf("\n hii");
}
	int add()
	{
	int a,b;
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	return a+b;
	}
