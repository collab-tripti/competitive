#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		if((n/2)%2==1)
		{
			cout<<"NO"<<endl;;
		}
		else
		{
			cout<<"YES"<<endl;;
			int sume=0,sumo=0;
			for(int i=1;i<=n/2;i++)
			{
				cout<<2*i<<" ";
				sume += 2*i;
			}
			for(int i=0;i<n/2-1;i++)
			{
				cout<<2*i+1<<" ";
				sumo +=2*i+1;
				}
				cout<<sume-sumo;	
		}
		cout<<endl;
	}
	
	return 0;
}
