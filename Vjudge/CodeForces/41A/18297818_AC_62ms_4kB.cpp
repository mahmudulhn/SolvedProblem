#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    cin>>s1;
    int flag=0;
    if(s.size()!=s1.size())
    {
        cout<<"NO\n";
        return 0;
    }
    for(int i=0,j=s1.size()-1;i<s.size();i++,j--)
    {
        if(s[i]!=s1[j])
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}
