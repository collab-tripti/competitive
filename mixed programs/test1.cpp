#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
	int k, counta=0, countb=0; cin>>k;
	string s;
	cin >> s;
	int len = s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]=='a')
			counta++;
		else if(s[i]=='b')
			countb++;
	}
	float diff=abs(counta-countb)/2;
	if(k>=diff)
	{
		cout<<len;
		exit(0);
	}
	if(k<diff)
	{
		int l=k;
		if(counta>countb)
		{
			for(;l>=0;l--)
			{
				if(counta!=countb)
				{
					counta--;
				countb++;
				}
			}
		}
		else	
		{
			for(;l>=0;l--)
			{
				if(counta!=countb)
				{
					counta++;
				countb--;
				}
			}
		}
	}
	diff=abs(counta-countb)/2;
	if(k>=diff)
	{
		cout<<2*min(counta,countb);
	}
	return 0;
}
