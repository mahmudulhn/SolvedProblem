#include<bits/stdc++.h>
using namespace std;

long long bigMod(int a,int b,int m){
    if(b==0)
        return 1;
    long long ans=bigMod(a,b/2,m)%m;
    if(b%2){
        return (ans*ans*a)%m;
    }
    else{
        return (ans*ans)%m;
    }
}

void solve(){
    int n,m,k;
    while(cin>>n>>m>>k){
        int i=1;
        vector<int>v;
        while(i<m){
            int x=bigMod(i,n,m);
            if(x==k)
                v.push_back(i);
            i++;
        }
        if(v.size()==0)
            cout<<-1<<endl;
        for(int j=0;j<v.size();j++)
            cout<<v[j]<<" ";
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}


