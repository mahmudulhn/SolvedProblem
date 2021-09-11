#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
long long lcm(long long a,long long b)
{
    return (a*b)/gcd(a,b);
}
void solve()
{
    //freopen("in.txt","r",stdin);
    long long t,a,b;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>a>>b;
            cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
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

