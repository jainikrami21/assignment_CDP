//19.LoopingPrograms
//j. Write a program you have tomake a summation of first and last Digit. (E.g. 1234ans:-5)
#include<stdio.h>
main()
{
	int n,last,s;
	printf("\n enter a number :");
	scanf("%d",&n);
	last=n%10;
	while(n>9)
	{
	   n=n/10;	
	}
	 s=s+last;
	printf("\n sum of first and last digit :%d",s);
}
