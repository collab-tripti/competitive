#include<bits/stdc++.h>
using namespace std;
// A Recursive C program to solve minimum sum partition 
// problem. 
#include <bits/stdc++.h> 
using namespace std; 
int findMinRec(int arr[], int i, int sumCalculated, int sumTotal) 
{  
    if (i==0) 
        return abs((sumTotal-sumCalculated) - sumCalculated); 
  
    return min(findMinRec(arr, i-1, sumCalculated+arr[i-1], sumTotal), 
               findMinRec(arr, i-1, sumCalculated, sumTotal)); 
} 
int findMin(int arr[], int m) 
{ 
    int sumTotal = 0; 
    for (int i=0; i<m; i++) 
        sumTotal += arr[i]; 
    return findMinRec(arr, m, 0, sumTotal); 
} 
int main()
{int t;
cin >> t;
	while(t--)
	{
		int n;
		cin>>n;int a[2*n];
		for(int i=0;i<2*n;i++)
			cin>>a[i];
		cout<<findMin(a,2*n)<<endl;
	}
	return 0;
}
