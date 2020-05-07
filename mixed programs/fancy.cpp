#include <bits/stdc++.h>
using namespace std;

int isSubstring(string s1, string s2) 
{ 
    int M = s1.length(); 
    int N = s2.length(); 
    for (int i = 0; i <= M - N; i++)
	 { 
        int j; 
        for (j = 0; j < N; j++) 
            if (s1[i + j] != s2[j]) 
                break; 
        
        if (j == N) 
        {
            if(i!=0 && s1[i-1]== ' ')
            {
            	if((s1[i+3]== ' ') || (i+2== M-1))
            		return 1;
			}
			else if(i==0 && (s1[i+3]== ' ' || i+2 ==M-1))
				return 1;					
		}
    } 
    return 0; 
} 
int main()
{
	int t;
	cin >> t;
	cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
	while(t--)
	{
		string n;
		getline(cin,n);
		string s = "not";
	    int res = isSubstring(n, s); 
    	if (res == 0) 
			cout << "regularly fancy" << endl;
		else
			cout << "Real Fancy" <<endl;		
	}
	return 0;
}
