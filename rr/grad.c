#include<stdio.h>
int main()
{
	float math, phy, che, comp, total,percentage;
	printf("\n enter math  marks:");
	scanf("%f",&math );
	printf("\n enter phy marks:");
	scanf("%f",&phy);
	printf("\n enter che marks:");
	scanf("%f",&che);
	printf("\n enter comp marks:");
	scanf("%f", &comp);
	total=math+phy+che+comp;
	percentage=(total/400)*100;
	printf("\n percentage=%f", percentage);
	if(percentage>=75)
	{
	printf("\n grad a");
	}
	else if(percentage>=60)
	{
	printf("\n grad b");
	}
	else if(percentage>45)
	{
	printf("\n grade c");
	}
	else if(percentage>35)
	{
	printf("\n pass");
	}
	else
	{
	printf("\n fail");
	}
	return 0;
}
	
