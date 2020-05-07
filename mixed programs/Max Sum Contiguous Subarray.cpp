#include<bits/stdc++.h>
using namespace std;
int maxSubArray(const vector<int> &A) {
    int curr=0,sum=0,summ=0,n=A.size();
    if(*max_element(A.begin(),A.end())<0)
    	summ = *max_element(A.begin(),A.end());
    else{
	for(int j=curr;j<n;j++)
    	{
    		sum+=A[j];
    		if(sum<0)
    		{sum=0;
    		curr =j+1;
			}
			summ = max(sum,summ);
		}
    } 
    return summ;
}

 int main()
 {
	vector<int> A;
	int n;cin>>n;int v;
	for(int i=0;i<n;i++)
	{
		cin>>v;
		A.push_back(v);
	}
	cout<< maxSubArray(A);
 	return 0;
 }
