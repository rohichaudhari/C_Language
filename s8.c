#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,j=0;
	printf("enter string:");
	gets(str);
	int k=strlen(str);
	i=0;
	j=k-1;
	while(i<k/2)
	{
	printf("%c %c",str[i],str[j]);
	i++;
	j--;
	}
	if(k%2!=0)
	printf("%c",str[k/2]);
	return 0;
}
	