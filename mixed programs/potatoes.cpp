#include <bits/stdc++.h>
using namespace std;
int isprime(int a)
{
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
			return 0;
		}
	return 1;
}
int main()
{
	int t;
	cin >>t;
	while(t)
	{
		int x,y,count=0,x1;
		cin >> x >> y;
		x=x+y;
		x1=x;
		while(count==0)
		{
			x++;
			y=isprime(x);
			if(y==1)
				count = 1;
		}
		cout << x-x1 << endl;
		t--;
	}
	return 0;
}
