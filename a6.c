#include<stdio.h>
int main()
{
	int i, p[5],q[5],pri,qty,amt,dis, disamt,gst,bill,tdisamt=0,tgst=0,tbill=0;
	for(i=0;i<5;i++)
	{
	printf("enter value p[%d]",i);
	scanf("%d",&p[i]);
	printf("enter value q[%d]",i);
	scanf("%d",&q[i]);
	}
	printf("\nprd\tprice\tqty\tamt\tdis\tdisamt\tgst\tbill\n");
	for(i=0;i<5;i++)
	{
		amt=p[i]*q[i];
		dis=amt*0.10;
		disamt=amt-dis;
		gst=disamt*0.18;
		bill=disamt+gst;
		tdisamt+=disamt;
		tgst+=gst;
		tbill+=bill;
		if(i==0)
		      printf("\nkeyb");
		     else if(i==1)
		     printf("mouse");
		    else if(i==2)
		      printf("monitor");
		     else if(i==3)
		        printf("pro");
		    else if(i==4)
		     printf("RAM");
	printf("\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",p[i],q[i],amt,dis,disamt,gst,bill);
	}
	printf("\n");
	printf("\t\t\t\t\t%d\t%d\t%d",tdisamt,tgst,tbill);
	return 0;
}

	