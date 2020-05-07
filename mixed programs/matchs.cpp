#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;cin>>t;
	while(t--)
	{
		ll n,m,div;cin>>n>>m;
		ll ma = max(n,m);
		ll mi = min(n,m);
		ll count=0;
		while(ma!=0 || mi!=0 )
		{ 
			count=0;
			ll d=ma/(mi*2);
			while(d--)
			{
				div = ma/mi-i*2;
				ma = ma-div*mi;
				if(ma==0 )
				{
					
				}
				ma = max(ma,mi);
				mi = min(ma,mi);
				count++;
			}
			if(ma%mi==0 && count%2!=0)
				{
					cout<<"Rich"<<endl;
					break;
				}
			else if((ma%mi && count%2==0) || count%2!=0)
			{
				cout<<"Ari"<<endl;
				break;	
			}		
		}
	}
	return 0;
}
