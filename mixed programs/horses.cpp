#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >>t;
	while(t)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		sort(a,a+n);
		int min = abs(a[1]-a[0]);
		for(int i=0;i<n-1;i++)
		{
			int difference = a[i+1]-a[i];
			if(difference < min)
			{
				min = difference;
			}
		}
		cout << min << endl;
		t--;
	}
	return 0;
}
