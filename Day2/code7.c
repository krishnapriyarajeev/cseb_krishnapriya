#include <stdio.h>

void main(){
	int a,b;
	a = 67;
	b = 94;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("a = %d, b = %d\n", *p1, *p2);
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
	printf("a = %d, b = %d\n", *p1, *p2);
}	