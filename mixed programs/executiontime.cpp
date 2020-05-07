#include<stdio.h>
int main()
{
	int i,count=0;
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%k==0)
		{
			count += 1;
		}
	}
	printf("%d",count);
	return 0;	
}
