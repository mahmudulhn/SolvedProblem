#include<bits/stdc++.h>
using namespace std;
bool isprime[50];
int n;
bool vis[50];
vector<int>v;
void sieve(){
    for(int i=2;i<=50;++i){
        if(!isprime[i]){
            //prime.push_back(i);
            for(int j=i+i;j<=50;j+=i) isprime[j]=true;
        }
    }
}
void backtrack(int pos){
    if(v.size()==n){
        for(int i=0;i<v.size();i++){

            if(i > 0) cout << " ";
            cout<<v[i];

        }
        cout<<endl;
        return;
    }
    for(int i=2;i<=n;i++){
        if(pos==n-1 and isprime[v[0]+i]) continue;
        if(!vis[i] and ( isprime[v[pos-1]+i]==false) and pos<=n){
            vis[i]=true;
            v.push_back(i);
            backtrack(pos+1);
            v.pop_back();
            vis[i]=false;
        }
    }
}
int main(){
    sieve();
   // freopen("in.txt","r",stdin);
    int i=1;
    while(cin>>n){
        if(i>1)
            cout<<endl;
        cout<<"Case "<<i<<":"<<endl;
        memset(vis,0,sizeof vis);
        v.push_back(1);
        backtrack(1);
        v.clear();
        i++;
    }
}
