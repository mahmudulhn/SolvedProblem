#include<bits/stdc++.h>
using namespace std;
int graph[102][102];
bool vis[102][102];
int n,m;
int x[]={-1,-1,-1,0,0,1,1,1};
int y[]={-1,0,1,-1,1,-1,0,1};
void BFS(int a,int b)
{
    vis[a][b]=true;
    pair<int,int>p;
    queue<pair<int,int> >q;
    q.push(make_pair(a,b));
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            int X=x[i]+p.first;
            int Y=y[i]+p.second;
            if(X>=0&&X<n&&Y>=0&&Y<m&&!vis[X][Y]&&graph[X][Y]=='@')
            {
                vis[X][Y]=true;
                q.push(make_pair(X,Y));
            }
        }
    }
}
void solve()
{
    while(cin>>n>>m)
    {
        if(m==0)
            break;
        char c;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>c;
                graph[i][j]=(int)c;
            }

        }
        int count=0;
        memset(vis,false,sizeof vis);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(graph[i][j]=='@'&&!vis[i][j])
                {
                    BFS(i,j);
                    count++;
                }
            }
        }
        cout<<count<<endl;
        memset(graph,0,sizeof graph);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

