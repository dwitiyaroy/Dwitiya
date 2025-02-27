#include<stdio.h>
#include<math.h>
int main()
{
	float CI,P,r,t;
	printf("Enter the principle : ");
	scanf("%f",&P);
	printf("Enter the rate : ");
	scanf("%f",&r);
	printf("Enter the time period : ");
	scanf("%f",&t);
	CI=P*pow((1+r/100),t)-P;
	printf("The compound interest is %f",CI);
	return 0;
}
