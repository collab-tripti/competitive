#include<iostream>
using namespace std;

int main()
{
	int n; 
	cin >> n;
	int a[n],b[n-1];
	for(int i=0;i<n;i++)
	{
		cin >> a[i]; 
	}
	for(int i=0;i<n;i++)
	{ 
		int max=0;
		int sum=0;
		for(int j=i;j<n;j++)
		{
			int x=sum;
			sum = sum+a[j];
			if(x < sum)
			{
				max = sum;
			}
			else
			{
				max = x;
			}		
		}
		b[i] = max;
	}
	int y;
	y= b[0];	
	for(int i=1;i<n-1;i++)	
	{
	
		if(y<b[i])
		{
			y=b[i];
		}
	}
	cout << y;
}
