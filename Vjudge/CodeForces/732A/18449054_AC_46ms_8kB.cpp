#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n>>m)
    {
        int ans=1,x=n;
        while(1)
        {
            if(n%10==m||n%10==0)
                break ;
            n+=x;
            ans++;
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


