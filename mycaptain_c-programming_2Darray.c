#include<stdio.h>
int main()
{
	printf("Enter the elements of the 3x3 matrix as follows: \n"); 
	int array[3][3]; 
	int i, j,sum;
	for(i =0; i<3; i++)
	{
		for(j =0; j<3; j++)
		{
			printf("Enter element [%d],[%d]\n", i+1, j+1);
			scanf("%d", &array[i][j]);
		}
	}
	printf("The matrix input is: \n");
	for(i = 0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("[%d], [%d]: [%d] \n",i+1, j+1, array[i][j]); 
		
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum += array[i][j]; 
			}
		}
	}
	printf("Sum of the diagonal elements is: %d ",sum);
	
	
}
