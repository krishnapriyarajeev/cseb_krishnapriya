#include<stdio.h>

void main()
{
	int arr[10][10], r,c;
	printf("Enter the number of rows and columns: ");
	scanf("%d %d", &r, &c);
	printf("Enter the values in the matrix:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d	",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("Diagonal elements: \n");

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==j)
				printf("%d	",arr[i][j]);
			else
				printf("	");
		}
		printf("\n");
	}
	printf("\n");

	printf("Non-Diagonal elements: \n");

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i!=j)
				printf("%d	",arr[i][j]);
			else
				printf("	");
		}
		printf("\n");
	}
	printf("\n");

	printf("Upper Diagonal elements: \n");

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i<j)
				printf("%d	",arr[i][j]);
			else
				printf("	");
		}
		printf("\n");
	}
	printf("\n");

	printf(" Lower Diagonal elements: \n");

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i>j)
				printf("%d	",arr[i][j]);
			else
				printf("	");
		}
		printf("\n");
	}


}