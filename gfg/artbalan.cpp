#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;
bool isprime(long int n)
{
	for(long int i=2;i*i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{int t;cin >> t;
	while(t--)
	{
		long int sum1=0,sum2=0,count2=0,count1=0,sum=0;
		string s;
		cin >> s;
		long int prim[MAX_CHAR]={0};
		for(int i=0;i<s.length();i++)
		{
			prim[s[i]-'A']++;	
		}
		for(int i=0;i<MAX_CHAR;i++)
		{
			if(prim[i]!=0)
				{
					count1++;
					sum =sum+prim[i];
				}
		}
		sort(prim, prim+MAX_CHAR, greater<int>()); 
		if(isprime(sum))
		{
			count1=0,count2=0;
			for(int i=1;i<MAX_CHAR;i++)
			{
				if(prim[i]<prim[0] && prim[i]>0)
				{
					count1=count1+prim[i];
				}
			}
			for(int i=0;i<MAX_CHAR;i++)
			{
				if(prim[i]>1)
				{
					count2 =count2+prim[i]-1;
				}
			}
			if(count1>count2)
				cout<<count2<<endl;
			else
				cout<<count1<<endl;
		}
		else
		{
		count2=count1;
		while(sum%count1!=0)
		{
			count1--;
			if(sum%count1==0)
				break;
		}
		count1=sum/count1;
		while(sum%count2!=0)
		{
			count2++;
			if(sum/count2==0)
				break;
		}
		count2=sum/count2;
		for(int i=0;i<MAX_CHAR;i++)
		{
			if( prim[i]>count1)
			{
				sum1=sum1+prim[i]-count1;
			}
		}
		for(int i=0;i<MAX_CHAR;i++)
		{
			if( prim[i]>count2)
			{
				sum2=sum2+prim[i]-count2;
			}
		}
		if(sum1<sum2)
			cout<<sum1<<endl;
		else
			cout<<sum2<<endl;
		}
	}
	return 0;
}
