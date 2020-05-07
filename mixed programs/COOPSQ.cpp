#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >>t;
	while(t)
	{
		long long int z,y,m;
		cin >> z;
		m = z + 1;
		z = pow((z),0.5);
		y = z+1;
		z = pow(z,2);
		y = pow(y,2);
	
		for( ;z < y;z++)
		{
			m = m+1;
		}
		cout << m << m+(y-z) << m+2*(y-z) << endl;
		t--;
	}
	return 0;
}
