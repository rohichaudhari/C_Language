#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n,k;
	clrscr();
	printf("\n enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
	if(i%2==0)
	{
	k=i*i;
	printf("\n %d",k);
	}
	else
	{
	printf("\n %d",i);
	}
	i++;
	}
	getch();
}