//14. Write a program to find the Max number from the given three number using 
//Ternary Operator
#include<stdio.h>
main()
{
    int a,b,c,big;
	printf("enter three number:");
	scanf("%d",&a);
	printf("enter three number:");
	scanf("%d",&b);
	printf("enter three number:");
	scanf("%d",&c);
	big=a>b?a>c?a:c:b>c?b:c;
	printf(" big number is:%d",big);
}
