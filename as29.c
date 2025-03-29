#include<stdio.h>
int main()
{
	int i,n=0;
	for(i=1; i<=20;i+=2)
	{
		n=n+i;
	}
	printf("Sum of the first ten odd natural no.s is %d",n);
	return 0;
}
