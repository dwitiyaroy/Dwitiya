#include<stdio.h>
int main()
{
	float a=10, b=20;
	float c;
	c=a;//c=10
	a=b;//a=20
	b=c;//b=10
	printf("%f %f", a,b);
	return 0;
}
