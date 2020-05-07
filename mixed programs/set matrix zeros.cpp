#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >& setZeroes(vector<vector<int> > &A)
{
	int m=A.size(),n=A[0].size(),r1=0,c1=0;
	for(int i=0;i<n;i++)
	{
		if(A[i][0]==0){
			r1=1;break;}
	}
	for(int i=0;i<m;i++)
	{
		if(A[0][i]==0)
		{	c1=1;break;
		}
	}
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(A[i][j]==0)
			{
				A[i][0]=0;
				A[0][j]=0;
			}
		}
	}
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(	A[i][0]==0 ||A[0][j]==0)
			{A[i][j]=0;
			}
		}
	}
	if(r1==1)
	for(int i=0;i<n;i++)
	{
			A[0][i]=0;
	}
	
	if(c1==1)
	for(int i=0;i<m;i++)
	{
			A[i][0]=0;
	}
	return A;
}
int main()
 {
	vector<vector<int> > A;
	int n,m;cin>>n>>m;int v;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v;
			A[i].push_back(v);
		}
	}
	setZeroes(A);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<A[i][j];
		}
	}
	return 0;
 }
