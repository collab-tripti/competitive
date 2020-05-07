#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t)
	{
		int n;
		string s;
		cin >> n >> s;
		int count=0;
		if(s.length()==1)
		{
			if(s[0]=='0')
				count=count+1;
		}
		else{
		if(s[n-2]=='0' && s[n-1]=='0')
		{
			s[n-1]='1';
			count=count+1;
		}
		if(s[0]=='0' && s[1]=='0' )
		{
			s[0]='1';
			count=count+1;
			
		}
		for(int i=1;i < s.length()-1;i++)
		{
			if(s[i]=='0' && s[i+1]=='0' && s[i-1]=='0' )
			{
				s[i] = '1';
				count=count+1;
			}
		}	}
		cout << count << endl;
		t--;
	}
	return 0;
}
