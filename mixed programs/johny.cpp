#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >>t;
	while(t)
	{
		int n,k;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		cin >> k ;
		int found = a[k-1];
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(a[i]==found)
				cout << i+1 << endl;
		}
		t--;
	}
	return 0;
}
