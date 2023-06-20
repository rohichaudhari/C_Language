#include<stdio.h>
int main()
{
	float pi, r, area;
	printf("\n enter pi:");
	scanf("%f",&pi);
	printf("\n enter r:");
	scanf("%f",&r);
	area=pi*r*r;
	printf("\n area=%f",area);
	return 0;
}