#include <stdio.h>

void main(){
	int a,b,sum;
	a = 100;
	b = 200;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	sum = *p1 + *p2;
	printf("%d", sum);
}