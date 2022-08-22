//19.LoopingPrograms
//e. Write aprogramyou haveto printthe Fibonacciseries upto usergivennumber
#include<stdio.h>
main()
{
	int n,i,a=-1,b=1,c;
	printf("\n enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   c=a+b;
		printf("\n %d",c);
		a=b;
		b=c;
	}
	
}
