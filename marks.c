#include<stdio.h>
int main()
{
	float phy, chem, math, comp, total, percentage;
	printf("\n enter phy:");
	scanf("%f",&phy);	
	printf("\n enter chem:");
	scanf("%f",&chem);
	printf("\n enter math:");
	scanf("%f",&math);
	printf("\n enter comp:");
	scanf("%f",&comp);
	total=phy+chem+math+comp;
	percentage=(total/400)*100;
	printf("\n total=%f",total);
	printf("\n percentage=%f",percentage);
	return 0;
}
	
	