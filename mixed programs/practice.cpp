#include <bits/stdc++.h>
using namespace std;
void leader(int a[],int n)
{
	int m = distance(a, max_element(a,a+n));
	for(int i=m;i<n;i++)
	{
		
	}
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		leader(a,n);
	}
	return 0;
}
