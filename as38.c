#include<stdio.h>
int main()
{
	int i,j,k,count=1;
	for(i=1;i<=4;i++)
	{
		for (k=1;k<=4-i ;k++)
		{
			printf(" ");
		}
		for(j=i;j<=i;j++)
		{
			printf("%d",count);
			count++;
		}
		printf("\n");
	}
	return 0;
}
