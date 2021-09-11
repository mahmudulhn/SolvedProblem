#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        if(s[0]=='+'||s[s.size()-1]=='+')
            count++;
        else if(s[0]=='-'||s[s.size()-1]=='-')
            count--;
    }
    cout<<count<<endl;
}
