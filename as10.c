#include<stdio.h>
int main()
{
	float a=10, b=20;
	a=a+b;//a=30
	b=a-b;//b=10
	a=a-b;//a=20
	printf("%f %f", a,b);
	return 0;
}
