#include<bits/stdc++.h> 
using namespace std; 

int main()
{
	int t;
	cin >>t;
	while(t){
		int a;
		cin >> a;
		unsigned long long fact =1;
		while(a)
		{
			fact = fact*a;
			a--;
		}
	cout << fact <<endl;
	t--;
	}
return 0;
}
