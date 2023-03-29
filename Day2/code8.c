#include<stdio.h>

void main()
{
	int a, b, *p1, *p2;
	printf("Enter the values of a and b: ");
	scanf("%d %d", &a, &b);
	p1=&a;
	p2=&b;
	
	printf("Sum: %d\nDifference: %d\nProduct: %d\nQuotient: %d\nRemainder: %d\n",*p1+*p2,*p1-*p2,(*p1)*(*p2),(*p1)/(*p2),(*p1)%(*p2));
}

