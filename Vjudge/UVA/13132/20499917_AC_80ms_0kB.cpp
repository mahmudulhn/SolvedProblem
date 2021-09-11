#include<bits/stdc++.h>
#define ll long long
#define Max 100000
using namespace std;
bool isprime[Max+5];
int phi[Max+5];
void tophi(){
    isprime[1]=true;
    for(int i=0;i<=Max;++i)
        phi[i]=i;
    for(int i=2;i<=Max;++i){
        if(!isprime[i]){
            for(int j=i;j<=Max;j+=i){
                isprime[j]=true;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
}
void solve(){
    int n;
    while(cin>>n){
        for(int i=1;i<=n;++i){
            int val;
            cin>>val;
            cout<<phi[val]<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tophi();
    solve();
}

