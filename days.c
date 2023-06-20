#include<stdio.h>
int main()
{
	int day, week, year, extraday;
	printf("\n enter day:");
	scanf("%d",&day);
	week=day/7;
	year=day/365;
	extraday=day-(year*365);
	printf("\n week=%d",week);
	printf("\n year=%d",year);
	printf("\n extraday=%d",extraday);
	return 0;
}