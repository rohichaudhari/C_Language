#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n,square=1;
	clrscr();
	printf("\n enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
	square=i*i;
	printf("\n %d",square);
	i++;
	}
	getch();
}