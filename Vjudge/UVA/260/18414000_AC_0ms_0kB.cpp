#include<bits/stdc++.h>
using namespace std;
string graph[210];
bool vis[212][212];
int n;
int x[]={0,0,-1,1,-1,1};
int y[]={-1,1,0,0,-1,1};
int ans=0,ans1=-1,t=0;
void DFS(int a,int b)
{
    if(vis[a][b]) return;

    vis[a][b]=true;

    for(int i=0;i<6;i++)
    {
        int X = x[i]+a;
        int Y = y[i]+b;

        if(X>=0 && X<n && Y>=0 && Y<n && graph[X][Y]=='b' && !vis[X][Y])
        {
            if(X==n-1)
            {
               ans=n-1;

               break;
            }
            DFS(X,Y);
        }
    }
}
void solve()
{
    //freopen("input.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //bool flag = false;

    while(cin>>n && n)
    {

        for(int i=0;i<n;i++)
            graph[i].clear();

        t++;

        for(int i=0;i<n;i++)
            cin>>graph[i];

        for(int j=0;j<n;j++)
        {
            if(graph[0][j]=='b'&&!vis[0][j])
            {
                ans1=0;

                if(ans1==0 && ans != n-1)
                    DFS(0,j);
            }
        }
        memset(vis,false,sizeof vis);
        if(ans1==0&&ans==n-1)
            cout<<t<<" "<<"B\n";
        else
            cout<<t<<" "<<"W\n";
        ans = 0;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}


