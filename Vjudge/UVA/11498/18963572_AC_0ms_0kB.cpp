#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    int k,n,m;
    while(cin>>k&&k)
    {
        cin>>n>>m;
        int count=0,x,y;
        for(int i=1;i<=k;i++)
        {
            cin>>x>>y;
            if(x==n||y==m)
                cout<<"divisa"<<endl;
            if(x<n&&y>m)
                cout<<"NO"<<endl;
            if(x>n&&y>m)
                cout<<"NE"<<endl;
            if(x<n&&y<m)
                cout<<"SO"<<endl;
            if(x>n&&y<m)
                cout<<"SE"<<endl;
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
