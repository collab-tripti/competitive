#include<bits/stdc++.h> 
using namespace std; 
int main()
{
	int t;
	cin >> t;
	while(0<t<=10)
	{
		long int n,m;
		cin >> n >> m;
		long int d = n+m;
		long long a[d];
		for(long int i=0;i<n;i++){
			cin>>a[i];}
		for(long int j=n;j<n+m;j++)
		{
			cin >> a[j];
		    long int c = 0;	
			for(int i=0;i<j;i++)
			{
				if(a[j]==a[i]){
					c++;
				}
			}
			if(c>0){cout <<"YES"<<endl;}
			else{cout <<"NO"<<endl;}	
		}
		t--;
	}
	return 0;
}
