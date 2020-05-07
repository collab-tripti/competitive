#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll l,r,count=0;
		cin >> l >> r;
		for(ll i=l;i<=r;i++)
		{
			ll n=i;
			while(n>0)
			{
				if(n%16 >=10)
					count++;
				n=n/16;
			}
		}
		cout<<count<<endl;		
	}	
	return 0;
}
