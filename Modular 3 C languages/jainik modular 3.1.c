//2. Write a program to make addition, Subtraction, Multiplication and Division 
//of Two Numbers. 
#include<stdio.h>
main()
{
	float a,b,c;
	printf("\n enter first number:");
	scanf("%f",&a);
	printf("\n enter second number:");
	scanf("%f",&b);
	c=a+b;
	printf("\n addition is:%f",c);
    c=a-b;
    printf("\n subtraction is:%f",c);
    c=a*b;
    printf("\n multiplication is:%f",c);
	c=a/b;
    printf("\n division is:%f",c);
    
}
