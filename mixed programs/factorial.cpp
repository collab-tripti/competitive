#include<iostream>
using namespace std;
#include<boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;
int main()
{
	unsigned int n,t;
	cin >> n;
	while(n>0)
	{	
		
	 	unsigned int p;
   		cin >> p;
	   	cpp_int count =1;     	
		for(int i=1;i<=p;i++)
    	{
			count=count*i;	 	
	   	} 
	   	cout << count <<endl;  	      
    	n--;			
	}
	return 0;
}
