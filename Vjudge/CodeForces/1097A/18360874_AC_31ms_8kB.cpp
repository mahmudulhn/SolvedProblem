#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a,s,x,y;
    cin>>a>>s;
    int t=5,flag=0;
    while(t--)
    {
        cin>>x>>y;
        if((a==x||s==y)&&flag==0)
            flag=1;
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
