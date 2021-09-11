#include<bits/stdc++.h>
using namespace std;
vector<int>v[105];
int vis[105];
set<int>s;
set<int>::iterator it;
void DFS(int root)
{
    if(vis[root]!=0)
        return;
    vis[root]=1;
    for(int i=0;i<v[root].size();i++)
    {
        DFS(v[root][i]);
    }
}
int main()
{
    int n,node,x;
    char c;
    while(scanf("%d",&n)&&n!=0)
    {
        while(scanf("%d",&node)&&node!=0)
        {
            while(scanf("%d%c",&x,&c)==2)
            {
                v[node].push_back(x);
                v[x].push_back(node);
                if(c=='\n')
                    break;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                memset(vis,0,sizeof(vis));
                vis[i]=1;
                DFS(v[i][j]);
                for(int k=1;k<=n;k++)
                {
                    if(vis[k]==0)
                        s.insert(i);
                }
                break;
            }
        }
        cout<<s.size()<<"\n";
        s.clear();
        for(int i=0;i<=n;i++)
            v[i].clear();
//    for(int i=1;i<n;i++)
//    {
//        for(int j=0;j<v[i].size();j++)
//            cout<<v[i][j]<<"\n";
//    }
    }
}
