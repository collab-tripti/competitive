#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    else
        return gcd(b, a % b); 
} 
int rotate(int a[],int d,int n)
{	 int g_c_d = gcd(d, n); 
    for (int i = 0; i < g_c_d; i++) { 
        int temp = a[i]; 
        int j = i; 
  
        while (1) { 
            int k = j + d; 
            if (k >= n) 
                k = k - n; 
  
            if (k == i) 
                break; 
  
            a[j] = a[k]; 
            j = k; 
        } 
        a[j] = temp; 
    } 
}
void printArray(int a[], int size) 
{ 
    for (int i = 0; i < size; i++) 
        cout << a[i] << " "; 
} 
int main()
{
	int n,d;cin>>n>>d;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	rotate(a,d,n);
	printArray(a, n);
	return 0;
}
