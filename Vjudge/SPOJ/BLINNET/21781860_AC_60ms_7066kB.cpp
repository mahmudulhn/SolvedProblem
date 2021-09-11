#include<bits/stdc++.h>
using namespace std;
typedef struct edg{
    int u,v,cost;
};
vector<edg>node;
int p[10000+3];
bool operator<(edg A, edg B){
    return A.cost < B.cost;
}
int find_p(int x){
    if(p[x]==x)
        return x;
    return p[x]= find_p(p[x]);
}
int mst(){
    sort(node.begin(),node.end());
    int ans=0;
    for(int i=0;i<node.size();i++){
        if(find_p(node[i].u)!=find_p(node[i].v)){
            p[p[node[i].u]]=p[node[i].v];
            ans+=node[i].cost;
        }
    }
    return ans;
}
void solve(){
   // freopen("in.txt","r",stdin);
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            int n;
            node.clear();
            cin>>n;
            for(int k=1;k<=n;k++)
                p[k]=k;
            for(int j=1;j<=n;j++){
                string s;
                edg e;
                cin>>s;
                e.u=j;
                int x;
                cin>>x;
                while(x--){
                    int temp,c;
                    cin>>temp>>c;
                    e.v=temp;
                    e.cost=c;
                    node.push_back(e);
                }
            }
            int ans=mst();
            cout<<ans<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

