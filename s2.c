#include<stdio.h>
int main()
{
	char str[20], str1[20];
	int i,j,k=0;
	printf("enter string:");
	scanf("%[^\n]s",&str);
	//{
	//printf("your string is:%s",str);
	//}
	 i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("\nreverse string:");
	j=i-1;
	while(k<=i)
	{
	str1[k]=str[j];
	j--;
	k++;
	}
	str1[k]='\0';
	printf("%s",str1);
	return 0;
}
