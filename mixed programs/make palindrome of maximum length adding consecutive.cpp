#include<bits/stdc++.h>
using namespace std;
int main()
 {
 	int n,ls,rs,l=0,r=n-1, count=0;
	 cin>>n;
 	int a[n];
 	for(int i=0;i<n;i++)
 		cin>>a[i];

	vector<int> v;
	ls=a[l];rs=a[r];
	while(l<=r)
	{	
	if(ls==rs )
	{l++;r--;v.push_back(ls);ls=a[l];rs =a[r];
	}
	else if(ls<rs)
	{l++;ls+=a[l];
	}
	else if(rs<ls)
	{r--;rs+=a[r];
	}
	if(ls==rs)	v.push_back(ls);
	}	
	}int s=v.size();
	for(int i=0;i<s;i++)
		cout<<v[i];
	return 0;
 }
