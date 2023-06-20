#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	for(i=0;i<3;i++)
	{
	     for(j=0;j<3;j++)
	        {
		printf("enter value a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		printf("enter value b[%d][%d]",i,j);
		scanf("%d",&b[i][j]);
                             }
	}
	//printf("matrixa\t\matrixb\t\sum");
	for(i=0;i<3;i++)
	{
	printf("\n");
	    for(j=0;j<3;j++)
	         {
		printf("%d ",a[i][j]);
	          }
	          printf("\t\t ");
	 for(j=0;j<3;j++)
	         {
		printf("%d ",b[i][j]);
	          }
	          printf("\t\t ");
	    for(j=0;j<3;j++)
	         {
		c[i][j]=a[i][j]+b[i][j];
		printf("%d ",c[i][j]);
	          }
	          
	}
	return 0;
}
