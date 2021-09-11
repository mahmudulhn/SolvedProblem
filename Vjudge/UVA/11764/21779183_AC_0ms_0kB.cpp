#include<bits/stdc++.h>
using namespace std;
void solve(){
    //freopen("in.txt","r",stdin);
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            int n,h=0,l=0;
            cin>>n;
            int temp=0;
            for(int j=0;j<n;++j){
                int x;
                cin>>x;
                if(x>temp&&j!=0)
                    h++;
                if(temp>x&&j!=0)
                    l++;
                temp=x;
            }
            cout<<"Case "<<i<<": "<<h<<" "<<l<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
