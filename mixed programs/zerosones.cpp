#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;int a[n],count1=0,count2=0,count3=0;
         for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
                count1++;
            else if(a[i]==1)
                count2++;
            else if(a[i]==2)
                count3++;
        }
        for(int i=0;i<count1;i++)
            cout<<0<<" ";
        for(int i=0;i<count2;i++)
            cout<<1<<" ";
        for(int i=0;i<count3;i++)
            cout<<2;
        cout<<endl;
    }
	return 0;
}
