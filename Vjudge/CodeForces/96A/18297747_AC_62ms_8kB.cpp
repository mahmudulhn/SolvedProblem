#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,switch_=1;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='1'&&s[i+3]=='1'&&s[i+4]=='1'&&s[i+5]=='1'&&s[i+6]=='1')||(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='0'&&s[i+4]=='0'&&s[i+5]=='0'&&s[i+6]=='0'))
        {
            switch_=0;
            break;
        }

    }
    if(!switch_)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
