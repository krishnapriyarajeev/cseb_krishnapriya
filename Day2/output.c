#include<stdio.h>

void main()
{
    int n=5, s=0, i=0, p=0, r=0;
    while(n>0)
    {
        r=n%10;
        p=8^i;
        s=s+p*r;
        i=i+1;
        n=n/10;
    }
    
    printf("%d",s);
}
