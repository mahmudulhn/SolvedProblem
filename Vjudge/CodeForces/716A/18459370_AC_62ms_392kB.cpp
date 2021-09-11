#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    while(cin>>n>>k)
    {
        int ans=1,a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]-a[i-1]<=k&&i!=0)
                ans++;
            else
                ans=1;
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
