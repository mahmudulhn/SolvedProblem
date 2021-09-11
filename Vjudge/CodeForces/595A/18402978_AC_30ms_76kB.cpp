#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a[n*m*2],ans=0;
        for(int i=0;i<n*m*2;i++)
            cin>>a[i];
        for(int i=0;i<n*m*2;i+=2)
        {
            if(a[i]==1||a[i+1]==1)
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


