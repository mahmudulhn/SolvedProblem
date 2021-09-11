#include<bits/stdc++.h>
using namespace std;
#define Max 10000000
bool isprime[Max+6];
vector<int>prime;
//int ans[Max+2];
void seive(){
    isprime[1]=true;
    isprime[0]=true;
    for(int i=2;i<=Max;++i){
        if(!isprime[i]){
            prime.push_back(i);
            for(int j=i+i;j<=Max;j+=i){
                isprime[j]=true;
            }
        }
    }
   // for(int i=0;i<prime.size();++i)
   //    cout<<prime[i]<<" ";
   // cout<<endl;
}
void solve(){
    int tc;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin>>tc){
        for(int i=1;i<=tc;++i){
            int n;
            cin>>n;
            int count=0;
            for(int j=0;prime[j]<=n/2;++j){
                //cout<<prime[j]<<" "<<n-prime[j]<<endl;
                //cout<<isprime[prime[j]]<<" "<<isprime[n-prime[j]]<<endl;
                if(!isprime[abs(n-prime[j])]){
                    count++;
                    //cout<<count<<endl;
                }
            }
            cout<<"Case "<<i<<": "<<count<<endl;
        }
    }
}

int main(){

    seive();
    //pre_cal();
    solve();
}
