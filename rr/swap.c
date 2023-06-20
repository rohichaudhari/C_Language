#include<stdio.h>
int main()
{
	int a, b;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",& b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\n  a=%d",a);
	printf("\n b=%d",b);
	return 0;
}