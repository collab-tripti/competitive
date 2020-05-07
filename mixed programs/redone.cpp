#include<iostream>
#include<cmath>
using namespace std;
#define ll long long int
int main() {
	ll t;cin>>t;
	ll a[1000001];
	a[0]=1;a[1]=1;ll mod=pow(10,9)+7;
	for(ll i=2;i<1000001;i++)
	{
		a[i]=(a[i-1]*i)%mod;
	}
	a[1000000]=(a[999999]*1000000)%mod;
	while(t--)
	{
	    ll n;cin>>n;
	    ll b=(a[n+1]-1)%mod;
	    cout<<b<<endl;
	}
	return 0;
}

