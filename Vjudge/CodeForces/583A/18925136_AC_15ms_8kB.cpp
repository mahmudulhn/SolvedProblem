#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        bool v[n+1],h[n+1];
        int j=1;
        memset(v,false,sizeof v);
        memset(h,false,sizeof h);
        for(int i=1;i<=n*n;i++)
        {
            int x,y;
            cin>>x>>y;
            if(!h[x]&&!v[y])
            {
                cout<<j<<" ";
                h[x]=true;
                v[y]=true;
            }
            j++;
        }
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
