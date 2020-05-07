#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void substring( string s,char x, ll n)
{
	ll preIndex=0,nextIndex=0,count=0;ll sum=0,ans;
	ll total=n*(n+1)/2;
	for(ll i=0;i<n;i++)
	{
		if(s[i]==x)
		{	preIndex=nextIndex;
			nextIndex=i;
			count++;
		    if(s[preIndex]==s[nextIndex])
			{ll j = nextIndex-preIndex-1;
				sum =sum + j*(j+1)/2;
			}
			else
				sum =sum+i*(i+1)/2;
		}
	}
	if(count==0)
	{
		ans = 0;
	}
	else
	{
		ll k = n-1-nextIndex;
		sum =sum+ k*(k+1)/2;
		ans=total-sum;
	}
	cout<<ans<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		char x;
		ll n;
		cin >> n >> s >> x;
		substring(s,x,n);
	}
	return 0;
}
