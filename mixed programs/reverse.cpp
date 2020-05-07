#include<bits/stdc++.h> 
using namespace std; 

int main()
{
	int t;
	cin >>t;
	while(t)
	{
		int reverse=0,a;
		cin >> a;
		while(a!=0)
		{
			reverse = reverse*10;
			reverse = reverse + a%10;
			a = a/10;
		}
		cout << reverse << endl;
		t--;
	}
	return 0;
}
