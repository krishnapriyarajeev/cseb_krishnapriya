#include <stdio.h>

void main(){
	int a = 12;
	int *ptr;
	ptr = &a;

	printf("Direct address = %p\n", &a);
	printf("Address using pointer = %p\n", ptr);
	printf("Value of a = %d\n", a);
	printf("Value of a using pointer = %d\n", *ptr);
}