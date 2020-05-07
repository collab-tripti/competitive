#include<bits/stdc++.h>
using namespace std;
/*Instead of maintaing two arrays of size n for storing left and right max of each element, we will just maintain two variables to store the maximum till that point.Since water 
trapped at any element = min( max_left, max_right) – arr[i] we will calculate water trapped on smaller element out of A[lo] and A[hi] first and move the pointers till lo doesn’t
cross hi.*/
int findWater(int a[], int n) 
{ 
   int lo=0,hi=n-1,water=0;
   int leftmax=0,rightmax=0;
   
   while(lo<=hi)
   {
   	if(a[lo] < a[hi])
   	{
   		if(a[lo]>leftmax)
   		{
   			leftmax=a[lo];
		   }
		else
		{
			water+=leftmax-a[lo];
			lo++;
		}
	}
	else
	{
		if(a[hi]>rightmax)
		{
			rightmax=a[hi];
		}
		else
		{
			water+=rightmax-a[hi];
			hi--;
		}
	}
   }
	return water; 
} 
  
// Driver program 
int main() 
{ 
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    	cin >> arr[i];
    cout << findWater(arr, n); 
    return 0; 
}
