#include<bits/stdc++.h>
using namespace std;
void solve(){
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            int n;
            cin>>n;
            n= __builtin_popcount(n);
            if(n%2)
                cout<<"Case "<<i<<": odd"<<endl;
            else
                cout<<"Case "<<i<<": even"<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
