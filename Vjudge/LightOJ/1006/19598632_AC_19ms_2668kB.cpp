#include<bits/stdc++.h>
using namespace std;
#define Max 10000
#define ull unsigned long long
ull dp[Max+5];
ull  a,b,c,d,e,f;
ull fun(int n)
{
    if(n==0)
        return a;
    if(n==1)
        return b;
    if(n==2)
        return c;
    if(n==3)
        return d;
    if(n==4)
        return e;
    if(n==5)
        return f;
    if(dp[n]!=0)
        return dp[n]%10000007;
    else
    {
        dp[n]=(fun(n-1)+fun(n-2)+fun(n-3)+fun(n-4)+fun(n-5)+fun(n-6))%10000007;
        return dp[n];
    }
}
void solve()
{
    ull test;
    while(cin>>test)
    {
        for(int i=1;i<=test;i++)
        {
            ull n;
            memset(dp,0,sizeof dp);
            cin>>a>>b>>c>>d>>e>>f>>n;
            cout<<"Case "<<i<<": "<<fun(n)%10000007<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
