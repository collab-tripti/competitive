#include<bits/stdc++.h> 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	while(t)
	{
		int count = 0;
		int a;
		cin >> a;
		while(a>0)
		{
			int	x = a%10;
			a = a/10;
			if(x == 4)
			{
				count=count+1;
			}
		}	
		cout << count<<endl;
		t--;
	}
	return 0;
}
