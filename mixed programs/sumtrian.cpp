#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll i,j,n;
		cin >> n;
		ll** a=new ll*[n+1];
		ll** ans=new ll*[n+1];
		for(i=1;i<=n;i++)
		{
			a[i]=new ll[i+1];
			ans[i]=new ll[i+1];
			for(j=1;j<=i;j++)
			{
				
				cin >> a[i][j];
			}
		}
		ans[1][1]=a[1][1];
		for(i=2;i<=n;i++)	
		{
			ans[i][1]=ans[i-1][1]+a[i][1];
			int c=0,d=0;
			for(j=2;j<=i;j++)
			{
				c=ans[i-1][j-1]+a[i][j];
				if(j!=i)
				{
					d=ans[i-1][j]+a[i][j];
					ans[i][j]=max(c,d);}
				else
					ans[i][j]=c;
			}
		}
		ll max = ans[n][1];
		for(i=2;i<=n;i++)
		{
			if(ans[n][i]>max)
				max=ans[n][i];
		}
		
		cout << max << endl;
	}
	return 0;
}
