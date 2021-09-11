#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        int ans=0;
        while(k--)
        {
            ans+=((n*2)+(m-2)*2);
            n-=4;
            m-=4;
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

