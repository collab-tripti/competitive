#include <bits/stdc++.h> 
using namespace std; 
const int MAX_CHAR = 26; 
void commonCharacters(string str[], int n) 
{ 
    // primary array for common characters  
    int count=0;// we assume all characters are seen before. 
    bool prim[MAX_CHAR]; 
    memset(prim, true, sizeof(prim)); 
  
    // for each string 
    for (int i = 0; i < n; i++) { 
  
        // secondary array for common characters 
        // Initially marked false 
        bool sec[MAX_CHAR] = { false }; 
  
        // for every character of ith string 
        for (int j = 0; str[i][j]; j++) { 
  
            // if character is present in all  
            // strings before, mark it. 
            if (prim[str[i][j] - 'a']) 
                sec[str[i][j] - 'a'] = true;  
        } 
  
        // copy whole secondary array into primary 
        memcpy(prim, sec, MAX_CHAR); 
    } 
  
    // displaying common characters 
    for (int i = 0; i < 26; i++) 
        if (prim[i]) 
            count++;
	cout<<count<<endl; 
} 
int main() 
{ int t;cin>>t;while(t--)
{
    int n;
	cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i]; 
    commonCharacters(arr, n); 
    }
    return 0; 
} 
