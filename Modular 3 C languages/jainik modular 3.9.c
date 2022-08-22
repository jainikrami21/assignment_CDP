//10. Write a Program to check the given number is Positive, Negative. 
#include<stdio.h>
main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num>0)
	 printf("\n positive number %d",num);
	else if(num<0)
	printf("\n negative number %d",num);
	else
	printf("\n 0 is natural number");
}
