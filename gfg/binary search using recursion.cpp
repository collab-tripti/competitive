#include<stdio.h>		//let the array taken is already sorted
int binary_search(int a[], int lb, int ub, int x)		//x is the number to be searched 
{	int mid;
	if(lb<=ub)
	{
		mid = (lb+ub)/2;
		if(a[mid]==x)
		{
			return mid;
		}
		if(a[mid]>x)
		{
			return binary_search(a,lb,mid-1,x);
		}
		if(a[mid]<x)
		{
			return binary_search(a,mid+1,ub,x);
		}
	}	
	return -1;
}
int main(void)
{
	int i,x,n,ub,lb;
	printf("enter the number of elements in the array : ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n ; i++)
	{
		scanf("%d \n",&a[i]);
	} 
	ub=n-1;
	lb = 0;	
	int size = sizeof(a)/sizeof(a[0]);
	printf("size of array %d \n", size);
	printf("enter the number to be searched \n");	
	scanf("%d",&x);
	int result = binary_search(a,lb,ub,x);
	(result==-1)? printf("element id not present in the array"):printf("element is present int the array %d",result);
	return 0;
}
