//A8.Write aprogramoftwo make Subtractionoftwo matrix using2-DArray.
#include<stdio.h>
main()
{
	int r1,c1,r2,c2;
	printf("\n enter number of rows and columns of first matrix...\n");
	scanf("%d%d",&r1,&c1);
	printf("\n enter number of rows and columns of second matrix...\n");
	scanf("%d%d",&r2,&c2);
    if(r1 == r2 && c1 == c2)
	{
		int m1[r1][c1];
		int m2[r2][c2];
		int R[r2][c2];
		int i,j;
		printf("\n enter first matrix...\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
		{
			scanf("%d",&m1[i][j]);
		}
		
		}
		printf("\n enter second matrix...\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
		
		}
			for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
		{
			R[i][j] = m1[i][j] - m2 [i][j];	
				
		}
		
		}
         printf("\n resultant matrix : \n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
		{
			printf("%d ",R[i][j]);			
		}
		printf("\n");
		}
	}
	else
	{
	printf("\n subtraction  is not possible : ");	
	}
		
}