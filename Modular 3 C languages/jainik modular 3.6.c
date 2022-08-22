/*6.Write a program to find the simple Interest*/
#include<stdio.h>
main()
{
    int p,r,t,a;
    printf("\n enter a number p:");
    scanf("%d",&p);
    printf("\n enter a number r:");
    scanf("%d",&r);
    printf("\n enter a number t:");
    scanf("%d",&t);
    a=p*r*t/100;
    printf("simple interest: %d",a);
}
