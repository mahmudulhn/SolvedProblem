#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i][0]=='O'&&s[i][1]=='O'&&flag==0)
        {
            s[i][0]='+';
            s[i][1]='+';
            flag=1;
        }
        if(s[i][3]=='O'&&s[i][4]=='O'&&flag==0)
        {
            s[i][3]='+';
            s[i][4]='+';
            flag=1;
        }
    }
//    cout<<s<<"\n";
    if(flag==0)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(int i=0;i<n;i++)
            cout<<s[i]<<"\n";
    }
}
