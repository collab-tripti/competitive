#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	int t;
	cin >>t;
	while(t)
	{

		long long int l,r;
		cin >> l >> r;
		long long n = (r-l)/2;
		if(l%2==1 || r%2==1)
			n++;
		if(n%2==0)
			cout <<"Even"<<endl;
		else
			cout <<"Odd"<<endl;
		t--;
	}
	return 0;
}
