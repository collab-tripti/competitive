#include <bits/stdc++.h> 
using namespace std;
int main() 
{ 	int t;
	cin>>t;
	while(t--)
	{
    int n;
	cin>>n;
	long int a[n];
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		a[i]=a[i]-1;
	}
	for(int i=0;i<n;i++)
	{
		sum =sum+a[i];
	}
	sum=sum+1;
	cout<< sum <<endl;
}
return 0;
}

