#include <bits/stdc++.h>
using namespace std;
bool mycompare(const pair<char,int> &a, const pair<char,int> &b)
{
	return a.second > b.second;
}
void frequency(string s)
{
	vector <pair<char,int> > vect;
	
	for(int i=0;i<s.length();i++)
	{
		int count=0;
		for(int j=i;j<s.length();j++)
		{
			if(s[i]==s[j])
			{
				count++;
			}
		}
		vect.push_back(make_pair(s[i],count));
	}
	sort(vect.begin(),vect.end(),mycompare);
	cout << vect[0].first;
}
int main()
{
	string s;
	cin>>s;
	frequency(s);
	return 0;
}
