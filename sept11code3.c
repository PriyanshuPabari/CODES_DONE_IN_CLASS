//WAP to copy the elements of one array into another array.

#include<stdio.h>
int main()
{
	int arr1[5], arr2[5], i;
	for(i=0;i<5;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&arr1[i]);
		
		arr2[i]=arr1[i];
		
	}
	printf("Elements in MAIN Array: ",arr1[i]);
	for(i=0;i<5;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("Elements in OTHER Array: ",arr2[i]);
	for(i=0;i<5;i++)
	{
		printf("%d ",arr2[i]);
	}
	return 0;
}