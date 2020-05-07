#include<iostream> 
#include<algorithm> 
using namespace std; 

int main()
{
	int t;
	int team1,team2,result1=0,result2=0,sum1=0,sum2=0;
	cin >> t;
	while(t)
	{
		cin >> team1 >> team2;
		sum1 = sum1+team1;
		sum2 = sum2 + team2;
		if(sum1>sum2)
		{
			if((sum1-sum2)>result1){
				result1 = sum1-sum2;
			}	
		}
		else{
			if((sum2-sum1)>result2)
			{
				result2 = sum2-sum1;
			}	
		}
		t--;
	}	
	if(result1 > result2)
	{
		cout <<1<<" "<<result1;
	}
	else{
		cout <<2<<" "<<result2;
	}
	return 0;
}
