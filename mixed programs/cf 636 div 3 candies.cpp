#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		long int n;cin>>n;
		vector<long int > s;
		long int x,k=log(n)/log(2)+1;
		for(int i=1;i<=sqrt(n);i++)
		{
			if(n%i == 0)
			{
				if(n%i == i)
					s.push_back(i);
				else{
					s.push_back(i);
					s.push_back(n/i);
				}
			}
		}
		vector<long int > :: iterator it;
		for(long int i=2;i<=k;i++ )
		{
			int a=pow(2,i)-1;
			it = find (s.begin(), s.end(), a);
			if(it!=s.end())
			{
				x=n/a;break;
			}
		}
		s.clear();
		cout<<x<<endl;
	}
	
	return 0;
}
