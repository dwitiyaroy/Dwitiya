#include<stdio.h>
int f(int);
int main()
{
	int n;
	scanf("%d",&n);
	printf("Factorial of the given no. is %d", f(n));
	return 0;
}
int f(int a)
{
	if(a!=0)
	 return a*f(a-1);
	else
	 return 1;
}
