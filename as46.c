#include<stdio.h>
int sum_of_squares(int n)
{
	if(n==1)
	 return 1;
	else
	 return (n*n)+sum_of_squares(n-1);
}
int main()
{
	int n=10;
	int result= sum_of_squares(n);
	printf("The sum of squares of first 10 natural no.s is %d\n", result);
	return 0;
}

