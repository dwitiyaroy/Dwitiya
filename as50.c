#include<stdio.h>
int main()
{
	int array[]={3,6,9,12};
	int n=sizeof(array)/sizeof(array[0]);
	int target,i;
	printf("Enter a target element : ");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
	    if(array[i]==target)
	    {
	    	printf("Target element is at %d\n",i);
	    	return 0;
		}
			
	}
	printf("Target element is not found.");
	return 0;
}
