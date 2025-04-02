#include<stdio.h>
int main ()
{
	int i,j,n=4;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{
			if(i>=j)
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}return 0;
}
