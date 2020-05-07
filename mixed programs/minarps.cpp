#include<iostream>
using namespace std;
#define ll long long int

int main()
{
	int t;cin >> t;
	while(t--)
	{
		int n;int min=0;cin >>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<=n-1;i++)
		{
			int y=0;
			int x=a[i];
			for(int j=0;j<=n-1;j++)
			{int w;
				w = x^a[j];
				y=y+w;
			}
			if(min==0)
				min = y;
			if(y<min)
				min=y;
		}
		cout<<min<<endl;
	}
	return 0;
}
