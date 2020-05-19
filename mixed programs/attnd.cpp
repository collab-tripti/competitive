#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;cin>>n;
		string s[n];
		for(int i=0;i<n;i++)
		{
			getline(cin,s[i]);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int x = s[i].compare(s[j]);
				if(x!=0)
				{
					for(int z=0;z<s[i].length();z++)
					{
						if(s[i][z]==" ")
						{
							s[i][z+1]='\0';
						}
					}
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<s[i]<<endl;
		}
	}
	return 0;
}
