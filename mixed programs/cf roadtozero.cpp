#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;cin>>t;
	while(t--)
	{
		long long int x,y,a,b;cin>>x>>y>>a>>b;;
		long long int sum=0;
		if(x>y )
		{
		long long int i=(x+ y)*a, j=b*y+a*(x-y);
			sum += min(i,j);
		}
		else
		{
		long long int i=x*a + y*a, j=b*x+a*(y-x);
			sum += min(i,j);	
		}
		cout<<sum<<endl;
	}
	return 0;
}
