#include<stdio.h>
int main()
{
	float n;
	printf("Enter a number ");
	scanf("%f",&n);
	if(n==(int)n)
	{
		printf("Whole number");
	}
	else
	{
		printf("Not a whole number");
	}
	return 0;
}
