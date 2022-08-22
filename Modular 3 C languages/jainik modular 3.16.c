//17.Write a Program of Addition, Subtraction ,Multiplication and Division using Switch case.(Must Be Menu
//Driven)
#include<stdio.h>
main()
{
    int a,b,c,n;
	printf("\n enter a num:");
	scanf("%d",&a);
	printf("\n enter a num:");
	scanf("%d",&b);
	printf("\n select the operation to perform:");
	printf("\n 1.addition");
	printf("\n 2.subtraction");
	printf("\n 3.multiplication");
	printf("\n 4.division");
	printf("\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		c=a+b;
		printf("\n addition is :%d",c);
		break;
		case 2:
		c=a-b;
		printf("\n subtraction is:%d",c);
		break;
		case 3:
		c=a*b;
		printf("\n multiplication is:%d",c);
		break;
		case 4:
		c=a/b;
		printf("\n division is:%d",c);
		break;
		deafult:
		printf("select a valid input:");
		break;
	}
	
}

