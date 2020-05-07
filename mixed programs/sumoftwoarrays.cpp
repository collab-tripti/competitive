#include<bits/stdc++.h>
using namespace std;
void sumoftwoarrays(int a[],int b[],int maxi,int min)
{
	
	int arr[maxi+1]={0};int carry=0;
	for(int i=maxi,j=min-1;i>=0,j>=0;i--,j--)
	{
		if(j>=0)
			arr[i]=b[j];
	}
	for(int i=maxi;i>0;i--)
	{
			arr[i]=arr[i]+a[i-1]+carry;
			if(arr[i]>9)
			{
				carry=arr[i]/10;
				arr[i]=arr[i]%10;
			}
			else 
				carry=0;
	}
	if(carry>0)
	{
		arr[0]=carry;
		cout<<arr[0]<<","<<" ";
	}
	for(int i=1;i<=maxi;i++)
		cout<<arr[i]<<","<<" ";
	cout<<"END";
}
int main()
{
	int n;cin>>n;int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int m;cin>>m;int b[m];
	for(int i=0;i<m;i++)
		cin>>b[i];
	if(n>m)
		{
			int maxi=n;
			int min=m;
			sumoftwoarrays(a, b, maxi,min);
		}
	else
		{
			int maxi=m,min=n;
			sumoftwoarrays(b,a,maxi,min);
		}	

	return 0 ;
}
