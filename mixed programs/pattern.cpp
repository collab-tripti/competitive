#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
	for(int i=1;i<=4;i++)
	{
		cout<<i;
		for(int j=1;j<i;j++)
		{
			cout<<" * "<<i;
		}
		cout<<endl;
	}
	for(int i=3;i>=1;i--)
	{
		cout<<i;
		for(int j=i-1;j>=1;j--)
		{
			cout<<" * "<<i;
		}
		cout<<endl;
	}
	return 0;
}
