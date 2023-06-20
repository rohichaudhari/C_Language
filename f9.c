#include<stdio.h>
int mul( int a,int b)
{
	return a+b;
}
int main()
{
int a,b;
printf("enter a and b:");
scanf("%d %d",&a,&b);
int  x=mul(a,b);
printf("%d ",x);
}
