//A6. Write a program to print the Matrix using 2-D Array
#include<stdio.h>
main()
{
	int arr[3][3],i,j;
	printf("enter the element of the matrix: \n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
	 {
		scanf("%d",&arr[i][j]);
	 }
	}
	printf("matrix: \n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
	 {
		printf(" %d",arr[i][j]);
	 }
	 printf("\n");
	}
}
