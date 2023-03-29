#include<stdio.h>
#include<string.h>

void main()
{
	int a=0;
	char ch[20] = "****##*****";
	int n=strlen(ch);

	for(int i=0;i<n;i++)
	{
		if(ch[i]=='*')
			a++;
		else
			a--;
	 }
	
	printf("%d",a);
}