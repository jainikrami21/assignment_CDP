//15.Write a program user enter the 5 subjects mark. You have to make a totaland find the percentage.
//Percentage > 75 you have to print“Distinction”
//Percentage > 60 and percentage <= 75 you have to print “Firstclass”
//Percentage >50 and percentage <= 60 you have to print “Second class” Percentage > 35 and 
//percentage <= 50 you have to print “Pass class” Otherwise print“Fail”
#include<stdio.h>
main()
{
	int a,b,c,d,e,sum,per;
	printf("\n enter a 5 subject:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	printf("\n sum of 5 subject:%d",sum);
	per=sum*100/500;
	printf("\n per of subject:%d",per);
	if(per>=75)
	printf("\n distinction");
	else if(per>60 && per<=75)
	printf("\n first class");
	else if(per>50 && per<=60)
	printf("\n second class");
	else if(per>35 && per<=50)
	printf("\n pass class");
	else
	printf("\n fail");
}
