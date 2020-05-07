#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >>t;
	while(t)
	{
		int p,a,b,c,d,count=0;
		cin >> p;
		if(p>2048)
		{
			d = p % 2048;
			c = p/2048;
			count = c;
			p=d;
		}
		a = log2(p);
		while(a>=0)
		{
			b = pow(2,a);
			if(p>=b)
			{
				p=p-b;
				count++;
			}
			a--;
		}
		cout << count << endl;
		t--;
	}
	return 0;
}
