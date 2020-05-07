#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;cin>>s;
	    s=s.replace("."," ");
	    string ip=s.split(" ");
	    for(int i=ip.length()-1;i>0;i++)
	    {
	     cout<<ip[i]<<".";  
	    }
	    cout<<endl;
	}
	return 0;
}
