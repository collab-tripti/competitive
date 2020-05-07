#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(ll n,ll d)
{
	ll a;ll b,c,min=n;
	c=n;
	c=c/10;c=c*10;c=c+d;
	if(min>c)
	{	
		min = c;}
	for(int i=1;i<floor(log10(n)+1);i++)
	{
		ll e = pow(10,i);
		a=n%e;
		b=floor(log10(a)+1)+1;
		c=n;
		c=c/pow(10,b);
		c=c*pow(10,b);
		a=a*10;
		c=c+a;
		c=c+d;
		if(min>c)
			min=c;		
	}
	cout << min << endl;
}

int main()
{
	int t;
	cin >>t;
	while(t--)
	{
		ll d;
		ll n;
		cin >> n >> d;
		solve(n,d);
	}
	return 0;
}
