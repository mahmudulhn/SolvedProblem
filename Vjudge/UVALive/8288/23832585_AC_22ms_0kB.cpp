
#include<bits/stdc++.h>

using namespace std;

void solve(){
    int p;
    while(cin>>p){
        for(int i=1;i<=p;++i){
            int n,k;
            cin>>n>>k;
            cout<<n<<" "<<(((k+1)*(k+2))/2)-1<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}


