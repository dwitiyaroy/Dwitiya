#include<stdio.h>
int main()
{
	char ch;
	printf ("Enter an uppercase character ");
	scanf("%c",&ch);
	if(ch=='H')
	{
		printf("The result is Head");
	}
	else
	{
		printf("The result is Tail");
	}
	return 0;
}
