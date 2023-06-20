#include<stdio.h>
int main()
{
	char i=65, c;
	printf("\n enter A to Z:");
	while(i<=90)
	{
	c=c+32;
	printf("\n %c-%c",i,c);
	i++;
	}
	return 0;
}