//A1.Write a program to entera tenelements using Array and make a summation of the numbers 
//and average ofsummation
#include<stdio.h>
main()
{
	int a[10],i,sum=0;
	float avg;
	printf(" enter element of an array:");
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	sum=sum+a[i];
	printf("sum%d",sum);
	avg=sum/10;
	printf("avg%2f",avg);
}