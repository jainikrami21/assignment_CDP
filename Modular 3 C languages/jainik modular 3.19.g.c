//19.LoopingPrograms
//g. Write aprogramto printthe numberin reverse order.
#include<stdio.h>
main()
{
	int x,y=0,r;
	printf("\n enter a number :");
	scanf("%d",&x);
	while(x!=0)
	{
		r=x%10;
		y=y*10+r;
		x=x/10;
	}
	printf("\n reverse is %d",y);
}
