#include<stdio.h>
int main()
{
	int a=11, square, cube;
	printf("\n enter a:");
	scanf("%d", &a);
	square=a*a;
	cube=a*a*a;
	printf("\n square=%d",square);
	printf("\n cube=%d",cube);
   	return 0;
}