#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a[4],n,m,x,y;
    while(cin>>n>>m>>x>>y)
    {
        long long ans=0;
        while(x&&y&&n)
        {
            ans+=256;
            x--;
            y--;
            n--;
        }
        while(n&&m)
        {
            ans+=32;
            n--;
            m--;
        }
        cout<<ans<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
