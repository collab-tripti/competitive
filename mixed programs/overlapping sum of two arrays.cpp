#include<stdio.h>
int main()
{
	int n,i,j,sum=0;
	printf("ENTER THE NO. OF ELEMENTS IN EACH ARRAY \n");
	scanf("%d", &n);
	int a[n],b[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d ", &a[i]);
		scanf("%d", &b[i]);
	}
	for(i=0;i<n;i++)
	
	{	
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				sum= sum+ 2*a[i];
			}
		}
	}
	printf("the sum of overlapping two array %d", sum);
		
}
