#include<stdio.h>
int main ()
{
	int n,l;
	printf("Enter a number : ");
	scanf("%d", &n);
	l=n-(n/10)*10;
	printf("The last digit of the number is %d",l);
	return 0;
}
