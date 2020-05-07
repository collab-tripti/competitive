#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(1<=t<=pow(10,3))
	{
		unsigned long int l,r,sum1=0,sum2=0;
		cin >> l >> r;
		if(1<=l<=r<=pow(10,9))
		{
		unsigned long int sum[r];
		sum[0]=1;
		for(unsigned long int i=1;i<r;i++)
			{
				sum[i] = sum[i-1] + 2;
			}
		if(l!=r)
		{
			for(unsigned long int i=0;i<r;i++)
			{
				sum1 = sum1 + sum[i] ;
			}		
			for(unsigned long int i=0;i<l-1;i++)
			{
				sum2=sum2 + sum[i];
			}
			cout << sum1-sum2 <<endl;
		}
		else if(l==r)
		{	
			cout << sum[l-1] << endl;
		}
				}
		t--;
	}
	return 0;
}
