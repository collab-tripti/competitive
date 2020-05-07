#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t)
	{
		int n;
		long long bit=0,nibble=0,byte=0;
		cin >> n;
		int rem,quo;
		rem = (n-1)	%26;
		quo = (n-1)/26;
		if(rem<2)
			bit = pow(2,quo );
		else if(rem<10)
			nibble=pow(2,quo );
		else 
			byte = pow(2,quo );
			
			cout << bit <<' '<< nibble <<' '<< byte << endl;
		t--;
	}
	return 0;
}

