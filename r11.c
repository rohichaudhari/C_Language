#include<stdio.h>
int main()
{
	float p, r, n, a;
	printf("\n enter p:");
	scanf("%f",&p);
	printf("\n enter r:");
	scanf("%f",&r);
	printf("\n enter n:");
	scanf("%f",&n);
	a=p*(1+(r/100)/n)-1;
	printf("\n a=%f",a);
	return 0;
}