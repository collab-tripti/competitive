#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a>> b;
	c = a-b;
	if(c%10<9)
	{
		c = c+1;
	}
	else
		c=c-1;
	
	cout << c << endl;
	return 0;
}
