#include<stdio.h>
int main()
{
	int array[5]={12,24,36,48,60};
	int n=sizeof(array)/sizeof(array[0]);
	int i;
	printf("Original array : ");
	for(i=0;i<n;i++)
	{
	    printf("%d ",array[i]);	
	}
	printf("\n In reverse array : ");
	for(i=n-1;i>0;i--)
	{
		printf("%d ", array[i]);
	}
	return 0;
}

