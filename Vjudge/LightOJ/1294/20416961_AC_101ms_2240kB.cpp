#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            ll n,m;
            cin>>n>>m;
            cout<<"Case "<<i<<": "<<(ll)(n/2)*m<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
