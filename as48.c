#include<stdio.h>
int main()
{
	int n,i,max,min;
	printf("Enter the no. of elements : ");
	scanf("%d", &n);
	int array[n];
	printf("Enter %d elements : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d ", &array[i]);
	}
	max=min=array[0];
	for(i=1;i<n;i++)
	{
		if(array[i]>max)
		 max=array[i];
		if(array[i]<min)
		 min=array[i];
	}
	printf("Maximum element : %d\n", max);
	printf("Minimum element : %d\n", min);
	return 0;
}
