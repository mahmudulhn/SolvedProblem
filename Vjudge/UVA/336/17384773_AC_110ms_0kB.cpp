#include<bits/stdc++.h>
using namespace std;
map<int,int>mymap;
vector<int>v[100000];
bool vis[100000];
int lev[100000];
void  BFS(int root,int level)
{
    memset(vis,false,sizeof(vis));
    memset(lev,0,sizeof(lev));
    queue<int>q;
    vis[root]=true;
    q.push(root);
    lev[root]=0;
    while(!q.empty())
    {
        int node=q.front();
        if(lev[node]>=level)
            return;
        for(int i=0;i<v[node].size();i++)
        {
            if(!vis[v[node][i]])
            {
                lev[v[node][i]]=lev[node]+1;
                vis[v[node][i]]=true;
                q.push(v[node][i]);
            }
        }
        q.pop();
    }
}
int main()
{
    //freopen("out.txt","w",stdout);
    int n,test=0;
    while(cin>>n&&n!=0)
    {
        int x,y,c=0;
        while(n--)
        {
            cin>>x>>y;
            if(mymap.find(x)==mymap.end())
                mymap[x]=c++;
            if(mymap.find(y)==mymap.end())
                mymap[y]=c++;
            v[mymap[x]].push_back(mymap[y]);
            v[mymap[y]].push_back(mymap[x]);
        }
//        for(int i=0;i<c;i++)
//        {
//            for(int j=0;j<v[i].size();j++)
//                cout<<v[i][j]<<" ";
//            cout<<"\n";
//        }
        int a,b;
        while(cin>>a>>b)
        {
            int node=0;
            if(a==0&&b==0)
                break;
            test++;
            BFS(mymap[a],b);
            for(int i=0;i<c;i++)
            {
                if(vis[i])
                    node++;
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",test,c-node,a,b);
        }
        for(int i=0;i<c;i++)
            v[i].clear();
        mymap.clear();
    }
    return 0;
}
