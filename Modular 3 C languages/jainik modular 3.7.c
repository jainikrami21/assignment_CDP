//8. Write a program to calculate sum of 5 subjects & find the percentage. Subject 
//marks entered by user.
#include<stdio.h>
main()
{
	int a,b,c,d,e,sum,per;
	printf("\n enter the 5 subject:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	printf("\n sum of 5 subject %d:",sum);
	per=sum*100/500;
	printf("\n percentage :%d", per);
}

