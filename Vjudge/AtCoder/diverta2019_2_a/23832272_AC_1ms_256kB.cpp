#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,k;
    while(cin>>n>>k){
        if(k==1) cout<<0<<endl;
        else cout<<n-k<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}


