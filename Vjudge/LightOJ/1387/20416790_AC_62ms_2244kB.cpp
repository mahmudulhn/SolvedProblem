#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            int n,sum=0;
            cin>>n;
            cout<<"Case "<<i<<":"<<endl;
            while(n--){
                string s;
                cin>>s;
                if(s[0]=='d'){
                    int k;
                    cin>>k;
                    sum+=k;
                }
                else{
                    cout<<sum<<endl;
                }
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}