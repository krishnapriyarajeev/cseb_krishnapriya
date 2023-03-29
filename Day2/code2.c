#include<stdio.h>
#include<stdlib.h>
void main()
{
	int arr[20], n, sum=0;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter the elements: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		sum=sum+arr[i];
	}
	
	for(int i=2; i<=sum/2; i++)
	{
		if(sum%i==0)
		{
			printf("Sum is not prime\n");
			exit(0);	
		}
		
	}
	printf("Sum is prime.");
}