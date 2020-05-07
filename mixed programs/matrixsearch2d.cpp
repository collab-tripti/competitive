#include<bits/stdc++.h>
using namespace std;
int binarySearch(int *arr, int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if(*((arr+0)+mid)==x || *((arr+0)+(mid+1))>x&&*((arr+0)+mid)<x)
        	return mid;
        else if (*((arr+0)+mid) < x) 
       		binarySearch((int *)arr, mid+1, r, x); 
        else if(*((arr+0)+mid) >x)
			binarySearch((int *)arr, l, mid-1, x); 
    } 
} 
int main()
{   
    int m, n, num, p;
    cin>>m>>n;
	int a[m][n];
	for(int i=0; i<m; i++)
	{ 
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>num;
	int count=0;int i;
	i =	binarySearch((int *)a,0,n,num);
	for(;i>=0; i--)
	{
		for(int j=0;j<m;j++)
		{
			if(a[j][i]==num)
			{
				count++;
				break;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
