#include<stdio.h>
int main()
{
	float a, b, c, s;
	printf("\n enter a:");
	scanf("%f",&a);
	printf("\n enter b:");
	scanf("%f",&b);
	printf("\n enter c:");
	scanf("%f",&c);
	s=((4*a+b)-(2*a*b))/100;
	printf("\n s=%f",s);
	return 0;
}