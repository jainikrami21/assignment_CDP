//19.LoopingPrograms
//h.Write a program you have to print the max and masks Operator
#include<stdio.h>
main()
{
	int n,i,max=0,masks;
	printf("\n how many students:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
   {
   	printf("\n enter %d student masks :",i);
   	scanf("%d",&masks);
   	if(masks>max)
   	max=masks;
	}
	printf("\n maximum=%d", max);	
}
