#include<bits/stdc++.h>
using namespace std;
void depchef(int a[],int d[],int n)
{
	int value=-1;
	for(int i=0;i<n;i++)
			{
				if(d[i]>a[(n-1+i)%n]+a[(i+1)%n])	
					{
						if(d[i]>value)
							value=d[i];
					}
				}
			cout<< value << endl;	
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;cin>>n;
		if( n>=3 && n<=100)
		{
			int a[n],d[n];
			for(int i=0;i<n;i++)
				cin >> a[i];
			for(int i=0;i<n;i++)
				cin >> d[i];
			depchef(a,d,n);
		}	
	}
	return 0;
}
