#include<stdio.h>
int main()
{
	char str[20],str1[20];
	int i,j,k=0;
	printf("enter string:");
	scanf("%[^\n]s",&str);
	printf("enter string:");
	scanf("%[^\n]s",&str1);
	i=0;
	while(str[i]!='\0')
	{
	i++;
	}
	j=j-1;
	while(k<=j)
	{
	str[i++]=str1[k];
	k++;
	}
	str[i]='\0';
	printf("%s",str);
	return 0;
}

