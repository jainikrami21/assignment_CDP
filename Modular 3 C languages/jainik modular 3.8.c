//9. Write a Program to show swap of two No's without using third variable.
#include<stdio.h>
main()
{
    int x,y;
    printf("\n enter of value x and y :");
    scanf("%d%d",&x,&y);
    printf("\nbefore swap the value of x & y : %d %d",x,y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("\nafter swap the value of x & y : %d %d",x,y);
} 

