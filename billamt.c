#include<stdio.h>
struct product
{
	int prodno,rate,qty,amt,dis,billamt,gst,netbill;
	char prodname[20];
};
int main()
{
	struct product[5];
	int i;
	for(i=0;i<5;i++);
	printf("enter product number");
	scanf("%d",&a[i].prodno);
	printf("enter product name");
	scanf("%s",&a[i].prodname);	
	printf("enter rate");
	scanf("%d",&a[i].rate);
	printf("enter qty");
	scanf("%d",&a[i].qty);
}
printf("\nprodno\tprodname\trate\tqty\tamt\tdis\tbillamt\tgst\tnetbill\n");
	for(i=0;i<5;i++)
	a[i.amt]=a[i].rate*a[i]qty;
	a[i].dis=a[i].amt*0.05;
	a[i].billamt=a[i].amt-a[i].dis
	a[i].gst=a[i].billamt*0.18;
	a[i].netbill=a[i].billamt+a[i].gst;
	printf("\t%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\%d\n",a[i].prodno,a[i].prodname,a[i].rate,a[i].qty,a[i].amt,a[i].dis,a[i].billamt,a[i].gst,a[i].netbill);


