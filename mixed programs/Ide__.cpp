#include <bits/stdc++.h>
using namespace std;
#define ll long long int
long long int countrem = 0;
int removeDuplicates(ll arr[], int n) 
{ 
    if (n==0 || n==1) 
        return n; 
  
    // To store index of next unique element 
    int j = 0; 
  
    // Doing same as done in Method 1 
    // Just maintaining another updated index i.e. j 
    for (int i=0; i < n-1; i++) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
        else{
            countrem++;
        }
  
    arr[j++] = arr[n-1]; 
  
    return j; 
} 

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
    mini[i]=min(min5, min6);
    }
    ll copy[n];
   for(int i=0;i<n;i++)
   {
       copy[i]=mini[i];
   }
   sort(copy,copy+n);
    removeDuplicates(copy, sizeof(copy)/sizeof(copy[0]));
   for(int i=0;i<n-countrem;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(copy[i]==mini[j])
            {
                int z=j+1;
                cout<<z<<" ";
            }
       }
   }
   
   return 0;
	
}