#include<iostream>
using namespace std;

int main()
{
	int s,t,a,b,m,n,count1=0,count2=0;
	cin >>s>>t>>a>>b>>m>>n;
	int app[m],ora[n];
	for(int i=0;i<m;i++)
	{
		cin >> app[i];
		app[i]=app[i]+a;
	}
	for(int i=0;i<n;i++)
	{
		cin >> ora[i];
		ora[i]=ora[i]+b;
	}
	for(int i=0;i<m;i++)
	{
		if(app[i]>=s && app[i]<=t)
		{
			count1++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(ora[i]>=s && ora[i]<=t)
		{
			count2++;
		}
	}
	cout<<count1<<endl<<count2<<endl;
	return 0;
}
