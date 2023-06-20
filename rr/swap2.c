#include<stdio.h>
int  main()
{
	int a,b, c;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\n a=%d",a);
	printf("\n b=%d",b);
	return 0;
}