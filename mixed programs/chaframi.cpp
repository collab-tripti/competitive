#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;cin >>t;
	while(t--)
	{
		ll n,x,cost=0;
		cin >>n>>x;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		for(ll i=0;i<n;i++)
		{
			if(i<=n-2 &&a[i]<x && n<3)
			{
				a[i+1]=a[i+1]+a[i];
				cost=cost+a[i];
				a[i]=0;
			}
			if(i>=1 && a[i]<x && n>=3)
			{
				a[i-1]+=a[i];
				cost+=a[i];
				a[i]=0;
			}
		}
		for(ll i=0;i<n;i++)
		{
			if(a[i]>0 && a[i]>x)
			{
				cost+=x;
			}
		}
		cout<<cost<<endl;
	}
	return 0;
}
