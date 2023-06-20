#include<stdio.h>
int maths,sci,eng,total;
float per;
void dis()
{
	printf("math\tsci\teng\ttotal\tper\n");
	printf("%d\t%d\t%d\t%d\t%f\n",maths ,sci,eng,total,per);
}
void calc()
{
	total=maths+sci+eng;
	per=(float)total/3;
	dis();
}
void setdata()
{
	printf("enter math marks:");
	scanf("%d",&maths);
	printf("enter sci marks:");
	scanf("%d",&sci);
	printf("enter eng marks:");
	scanf("%d",&eng);
	calc();
}
int main()
{
	setdata();
}