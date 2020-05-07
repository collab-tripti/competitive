#include<iostream>
using namespace std;

int main()
{
	int t ;
	cin >> t;
	while(t)
	{
		int n,count = 0;
		cin >> n;
		int a[n][n];
		a[0][0]=1;
		for(int i=0;i<n;i++)
		{   
			int sum = 1;
			int d = 1;
			for(int j=1;j<n;j++)
			{	
				if(i>0 && j==1)
				{
					a[i][0]=a[i-1][0] +1+ count;
					sum = a[i][0];
			    } 
						
				if((i+j)<n)
				{
					sum = sum + j + i ;
					a[i][j]= sum ;
				}
				else
				{
					sum = a[i][j-1]+ n - d;	
					a[i][j]= sum;
					d++;
				}
			}
			count++;
		}
		for(int i=0;i<n;i++)
		{   
			for(int j=0;j<n;j++)
			{ 
				cout << a[i][j] <<" ";
		    }
			cout << endl;
	    }
		t--;
	}
	return 0;
}
