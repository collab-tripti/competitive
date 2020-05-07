#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin >>n;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	int k=0;int m=n;
	while(k<n)
	{
		for(int i=0;i<m;i++)
		{
			cout<<a[i][n-1]<<" ";
		}
		n--;
		cout<<endl;
	}
	return 0;
}
