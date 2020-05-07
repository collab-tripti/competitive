#include<bits/stdc++.h> 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	while(t)
	{
		int n,sum=0;
		cin >> n;
		sum = sum + n%10;
		// Find total number of digits - 1 
    	int digits = (int)log10(n); 
  
    	// Find first digit 
    	n = (int)(n / pow(10, digits)); 
    	sum = sum + n;
    	cout << sum<<endl;
		t--;
	}
	return 0;
}
