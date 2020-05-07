#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    ll a[n][4]; 
    for(int i=0;i<n;i++)
        for(int j=0;j<4;j++)
            cin>>a[i][j];
    int x,y;
    cin>>x>>y;
    ll mini[n];
    for(int i=0;i<n;i++)
    { ll sum1=abs(a[i][0]- x)+abs(a[i][1]- y);
     ll sum2 =abs(a[i][2]- x)+abs(a[i][3]- y);
     ll sum3=abs(a[i][2]- x)+abs(a[i][1]- y);
     ll sum4=abs(a[i][0]- x)+abs(a[i][3]- y);
    ll min5= min(sum1,sum2);
    ll min6 =min(sum3,sum4);
    mini[n]=min(min5, min6);
    }
    ll copy[n];
   for(int i=0;i<n;i++)
       copy[i]=mini[i];
  
   sort(copy,copy+n);
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(copy[i]==mini[j])
            {int z=j+1;
                cout<<z<<" ";
            }
       }
   }
	return 0;
}
