#include<iostream>
#include<cmath>

using namespace std;

bool primefactor(int n)
{
	while(n%2==0)
	{
		n=n/2;
		return false;
	}
	for(int i=3;i<=sqrt(n);i=i+2)
	{
		while(n%i==0)
		{
			n = n/i;
			return false;
		}
	}
	if(n>2)
	{
		return true;
	}
}
 
int main()
{
	int n,t ;
	cin >> t;
	while(t--)
	{
		cin>>n;
		if(primefactor(n))
		{
			cout<<1<<endl<<n<<endl;
		}
		else
		{
			int m=0,l=0;
			for(int i=sqrt(n);i>=2;i--)
			{
				if(n%i==0)
				{
					m=n/i;
					l=n/m;
					break;
				}
			}	
			cout<<2<<endl<<m<<endl<<l<<endl;
		}
	}
	return 0;
}
