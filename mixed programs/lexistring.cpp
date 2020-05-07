#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	char index;
	int a[26];
	while(t--)
	{
		string p,s;
		cin>>p>>s;
		int si=s.length();
		int b[si];
		int j=0;
		for(int i=0;i<26;i++)
		{	
			int r= p[i]-'a';
			a[r]=j;
			j++;
		}
		for(int k=0;k<si;k++)
		{
		    int some = s[k]-'a';
			b[k]=a[some];
		}
		sort(b,b+s.length());
		for(int k=0;k<si;k++)
		{
		    for(int st = 0 ; st <26; st++)
		    {
		        if(b[k] == a[st])
		        {
		           index = st + 'a';
		        }
		    }
		    cout<<index;
		}
		cout<<"\n";
	}
	return 0;
}
