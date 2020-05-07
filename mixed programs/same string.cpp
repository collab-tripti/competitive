#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s,t;cin>>s>>t;
        unordered_set< int > sl;
		unordered_set< int > tl;
        int slen = s.length(),tlen=t.length();
        while(slen--)
        {
            sl[s[slen]-'a']++;
        }
        while(tlen--)
            tl[t[tlen]-'a']++;
        for(auto i=sl.begin(),j=tl.begin();i<sl.end(),tl.end();i++,j++)
        {if(sl[i]%2==0) 
            sl[i]=0;
            
            if(tl[j]%2==0)
                tl[j]=0;
                
        if((sl[i]-tl[j])%2==0)
        {sl[i]=0;tl[j]=0}
        }
        for(int i=0,j=0;i<sl.size(),tl.size();i++,j++)
        {
            if((sl[i]-tl[j])%2!=0)
               { cout<<"NO"<<endl;return 0;}
        }
        cout<<"YES"<<endl;
        return 0;
    }
}

