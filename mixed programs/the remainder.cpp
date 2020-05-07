#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int a[t],b[t],o[t];
	for(int i=0;i<t;i++)
	{
		cin >> a[i]>>b[i];
		o[i]=a[i]%b[i];
	}
	for(int i=0;i<t;i++)
	{
		cout << o[i] << endl;
	}
	
	return 0;
}
