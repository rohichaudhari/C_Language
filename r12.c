#include<stdio.h>
int main()
{
	int v, s, m, t;
	printf("\n enter v:");
	scanf("%d",&v);
	printf("\n enter s:");
	scanf("%d",&s);
	printf("\n enter m:");
	scanf("%d",&m);
	t=((v+s)+(1-m)*1);
	printf("\n t=%d",t);
	return 0;
}