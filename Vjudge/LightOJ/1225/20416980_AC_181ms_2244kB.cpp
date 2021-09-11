#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            string s;
            cin>>s;
            string str=s;
            reverse(str.begin(),str.end());
            if(s==str)
                cout<<"Case "<<i<<": Yes"<<endl;
            else
                cout<<"Case "<<i<<": No"<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

