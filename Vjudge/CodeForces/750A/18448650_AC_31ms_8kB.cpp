#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n>>m)
    {
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            m+=(5*i);
            if(m<=240)
                ans++;
            else
                break;
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

