#include<bits/stdc++.h>
using namespace std;
int p[27];
void in_(int n){
    for(int i=1;i<=n;i++)
        p[i]=i;
}
int find_pr(int n)
{
    if(p[n]!=n)
        p[n]=find_pr(p[n]);
    return p[n];
}
void union_(int i,int j)
{
    int pr_of_i,pr_of_j;
    pr_of_i=find_pr(i);
    pr_of_j=find_pr(j);
    //cout<<p[i]<<" "<<p[j]<<endl;
    if(pr_of_i!=pr_of_j)
    {
        if(pr_of_i<pr_of_j)
            p[pr_of_j]=pr_of_i;
        else
            p[pr_of_i]=pr_of_j;
    }
    //cout<<find_pr(i)<<" "<<find_pr(j)<<endl;
    //cout<<pr_of_i<<" "<<pr_of_j<<endl;
    //cout<<p[pr_of_i]<<" "<<p[pr_of_j]<<endl;

}
void solve(){
    int tc;
    while(cin>>tc){
        cin.ignore();
        for(int i=1;i<=tc;i++){
            if(i!=1)
                cout<<endl;
            memset(p,0,sizeof p);
            int res=0;
            string s;
            cin>>s;
            cin.ignore();
            int n;
            n=s[0]-'A'+1;
            in_(n);
            string edges;
            while(getline(cin,edges)){
                //cout<<edges<<endl;
                if(edges.size()==0)
                    break;
                int x,y;
                x=edges[0]-'A'+1;
                y=edges[1]-'A'+1;
                //cout<<x<<" "<<y<<endl;
                if(find_pr(x)!=find_pr(y))
                {
                    //if(find_pr(x)>find_pr(y))
                        //swap(x,y);
                    union_(x,y);
                }
            }
            //cout<<"got it"<<endl;
            for(int j=1;j<=n;j++){
                if(p[j]==j)
                    res++;
                //cout<<j<<" "<<p[j]<<endl;
            }
            cout<<res<<endl;
        }
    }
}
int main(){
    //freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
