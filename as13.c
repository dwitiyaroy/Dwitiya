#include<stdio.h>
int main()
{
	float l,b,ar,pr;
	printf("length : ");
	scanf("%f",&l);
	printf("breadth : ");
	scanf("%f",&b);
	ar=l*b;
	printf("The area of the rectangle is %f",ar);
	pr=2*(l+b);
	printf("The perimeter of the rectange is %f",pr);
	return 0;
}
