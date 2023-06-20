#include<stdio.h>
int main()
{
	char str[20];
	printf("enter string:");
	scanf("%[^\n]s",&str);
	{
	printf("your string is:%s",str);
	}
	int i=0;
	while(str[i]!='\0')
	{
	i++;
	}
	printf("\n length is:%d",i);
	return 0;
}