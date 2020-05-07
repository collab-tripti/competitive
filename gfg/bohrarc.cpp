#include <bits/stdc++.h>
using namespace std;
long long int chitti(long long int n)
{
	long long int count=0;
	for(long long int i=1;i<=sqrt(n);i++)
 		{
 			if(n%i==0)
 			{
 				if(n/i==i)
 					count++;
 				else
 					count+=2;
			 }
		 }
	return count;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		long long int n,m;
		cin >> n ;
 		m=chitti(n);
		if(m>3 && m%2!=0)
			cout << "Yes"<<endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
