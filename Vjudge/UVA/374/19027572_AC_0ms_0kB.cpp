#include<bits/stdc++.h>
using namespace std;
long long BigMod(long long n,long long x,long long m)
{
    long long a;
    if(x==0)
        return 1;
    else if(x%2==0)
    {
        a=BigMod(n,x/2,m);
        return (a*a)%m;
    }
    else
        return (BigMod(n,x-1,m)*(n%m))%m;
}
void solve()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long b,p,m;
    while(cin>>b>>p>>m)
        cout<<BigMod(b,p,m)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

