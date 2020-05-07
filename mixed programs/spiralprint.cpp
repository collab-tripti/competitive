#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin >>m >>n;
	int ar[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cin>>ar[i][j];
	}
	int i,k=0,l=0;
	while(k<m && l<n)
	{
		for(int i=k;i<m;i++)
		{
			cout<<ar[i][l]<<", ";
		}
		l++;
		for(int i=l;i<n;i++)
		{
			cout<<ar[m-1][i]<<", ";
		}
		m--;
		if(l<n)
		{
			for(int i=m-1;i>=k;i--)
			{
				cout<<ar[i][n-1]<<", ";
			}
			n--;
		}
		if(k<m)
		{
			for(int i=n-1;i>=l;i--)
			{
				cout<<ar[k][i]<<", ";
			}
			k++;
		}
	}
	cout<<"END";
	return 0;
}
