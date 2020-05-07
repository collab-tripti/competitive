#include <bits/stdc++.h>
using namespace std;
void ispalindrome(int arr[],int n)
{
	int l=0,r=n-1;
	int mid=l+(r-l)/2;
	while(l<r)
	{
		if(arr[l++]!=arr[r--])
		{
			cout<<"false";
			exit(0);
		}
	}
	cout<<"true";
}
int main()
{
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	ispalindrome(arr,n);
	return 0;
}
