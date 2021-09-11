#include<bits/stdc++.h>
using namespace std;
set<char>mp;
int main()
{
    string s;
    cin>>s;
    int c=1;
    for(int i=0;i<s.size();i++)
    {
        mp.insert(s[i]);
    }
    if((mp.size())%2==0)
        cout<<"CHAT WITH HER!\n";
    else
        cout<<"IGNORE HIM!\n";
}
