#include<iostream>
using namespace std;
int main()
{	int t;
	cin >>t;
	while(t)
	{
		int a,b;
		int N,count1=0,count2=0;	
		cin >> N >> a >> b;
		unsigned int A[N];
		for(int i=0;i<N;i++)
		{
			cin >> A[i];
		}			
		if(a!=b){
			for(int i=0;i<N;i++)
			{
				if(A[i]%a==0)
				{
					A[i]=1;
					count1++;
				}
			}
			for(int i = 0;i<N;i++)
			{
				if(A[i]%b==0)
				{
					A[i]=1;
					count2++;
				}
			}
			if(count1 > count2)
				cout << "BOB" << endl;
			else
				cout << "ALICE"<< endl;	
			}
		else{
			cout << "BOB" << endl;
		}		
		t--;
	}
	return 0;
	}
