//12. Write a Program to check the given number is prime or not prime. 
#include<stdio.h>
main()
{
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	for(b=2;a>=b;b++)
	{
		if(a%b==0)
		break;
	}
	if(a==b)
	printf("prime number");
	else
	printf("not a prime number");
}

