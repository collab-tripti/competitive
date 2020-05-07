#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(ll a[],ll n)
{
	ll count1=0,count2=0;
	for(ll i=0;i<n;i++)
	{
		if(a[i]>0)
			count1++;
		else
			count2++;
	}
	if(count1>0 && count2>0)
	{
		cout<<max(count1,count2)<<" "<<min(count1,count2)<<endl;
	}
	else if(count1==0 || count2==0)
		cout<<max(count1,count2)<<" "<< max(count1,count2)<<endl;
}
int main()
{
	int t;
	cin >>t;
	while(t--)
	{
		ll n;
		cin >>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		solve(a,n);
	}
	return 0;
}
