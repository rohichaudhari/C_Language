#include<stdio.h>
int add(int a,float b)
{
 printf("mul:%f",a/b);
}
int main()
{
int a;
float b;
printf("enter a and b:");
scanf("%d %f",&a,&b);
add(a,b);
}