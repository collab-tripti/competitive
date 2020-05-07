#include <bits/stdc++.h>
using namespace std;
class gcdd
{
	public: long long int gcd(long long int a, long long int b)
	{
		if(a==0||b==0)
			return 0;
		if(a==b)
			return a;
		if(a>b)
			return gcd(a-b,b);
		return gcd(a,b-a);
	 } 
long long int lcm(long long a,long long b)
{
	return (a*b)/gcd(a,b);
}
};
int main()
{
	int t;
	cin >>t;
	while(t)
	{
		gcdd g;
		long long k,n,count;
		long int a,b;
		cin >> n>>a>>b>>k;
		count=(n/a)+(n/b);
		count = count-2*(n/(g.lcm(a,b)));
		if(count>=k)
			cout<<"Win"<<endl;
		else
			cout<<"Lose"<<endl;
		t--;
	}
	return 0;
}
