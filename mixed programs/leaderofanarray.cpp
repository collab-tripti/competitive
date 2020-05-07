#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int leader(ll a[],ll n)
{
    ll r=n-1,j=0;
    ll max_from_right = a[r];
    for(ll i=r;i>=0;i--)
    {
    	if(a[i]>=max_from_right)
    	{
    		max_from_right=a[i];
    		a[r-j]=a[i];
    		j++;
		}
	}
	for(ll k=n-j;k<n;k++)
		cout<<a[k]<<" ";
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		ll n;cin>>n;ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		leader(a,n);
		cout<<endl;
	}
	return 0;
}
