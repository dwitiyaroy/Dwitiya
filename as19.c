#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the number a : ");
	scanf("%d",&a);
	printf("Enter the number b : ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("a is greater than b");
	}
	else if(a<b)
	{
		printf("a is lesser than b");
	}
	return 0;
}
