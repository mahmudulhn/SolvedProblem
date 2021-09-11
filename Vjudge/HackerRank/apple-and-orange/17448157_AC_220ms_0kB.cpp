#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int n,m;
    cin>>n>>m;
    int apple[n],orange[m],ca=0,co=0;
    for(int i=0;i<n;i++)
    {
        cin>>apple[i];
        apple[i]+=a;
        if(apple[i]>=s&&apple[i]<=t)
            ca++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>orange[i];
        orange[i]+=b;
        if(orange[i]>=s&&orange[i]<=t)
            co++;
    }
    cout<<ca<<"\n"<<co<<"\n";
}
