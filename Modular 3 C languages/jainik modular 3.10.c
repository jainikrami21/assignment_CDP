//11.Write a Program to check the given year is leap year or not.
#include<stdio.h>
main()
{
	int yr;
	printf("\n enter a year :");
	scanf("%d",&yr);
	if(yr%4==0)
	{
	      if(yr%400==0)
	      {
	      	printf("leap year");
		  }
	        if(yr%100!=0)
	        {
	            printf("leap year");
	        }
	}
	else
	{
		printf("Not leap Year");
	}
    
}

