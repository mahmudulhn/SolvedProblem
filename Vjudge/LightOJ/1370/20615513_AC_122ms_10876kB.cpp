#include<bits/stdc++.h>
#define Max 1000010
using namespace std;
bool isprime[Max+5];
int phi[Max+5];
int mp[Max+5];
void tophi(){
    for(int i=0;i<=Max;i++)
        phi[i]=i;
    phi[1]=0;
    for(int i=2;i<=Max;i++){
        if(!isprime[i]){
            for(int j=i;j<=Max;j+=i){
                isprime[j]=true;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
}
void precal(){
    for(int i=1;i<=Max;i++){
        for(int j=phi[i];j>=0&&mp[j]==0;j--){
            mp[j]=i;
            //cout<<i<<" "<<j<<" "<<mp[j]<<endl;
        }
    }
}
void solve(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            int n;
            cin>>n;
            int a[n];
            long long sum=0;
            for(int j=0;j<n;j++){
                cin>>a[j];
                sum+=(mp[a[j]]);
            }
            cout<<"Case "<<i<<": "<<sum<<" Xukha"<<endl;
        }
    }

}
int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    tophi();
    precal();
    solve();
}
