#include<stdio.h>
int main()
{
	int i,n,f;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=n*i;
		printf("Factorial of the number is %d\n",f);
	}
	return 0;
}
