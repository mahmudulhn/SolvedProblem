#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 1000000
bool isprime[Max+6];
vector<int>prime;
ll area,minPosSide;
void sieve(){
    int s=sqrt(Max);
    for(int i=2;i<=s;i++){
        if(!isprime[i]){
            for(int j=i*i;j<=Max;j+=i)
                isprime[j]=true;
        }
    }
    for(int i=2;i<=Max;i++){
        if(!isprime[i])
            prime.push_back(i);
    }
}
ll getAns(ll n){
    ll div=1;
    for(int i=0;i<prime.size()&&(prime[i]*prime[i]<=n);i++){
        if((n%prime[i])==0){
            ll Count=1;
            while(n%prime[i]==0){
                Count++;
                n/=prime[i];
            }
            div*=(Count);
            //cout<<"ok"<<endl;
        }
    }
    if(n==1)
        div/=2;
    return div;
}
void solve(){
    //freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            cin>>area>>minPosSide;
            if(minPosSide*minPosSide>area)
                cout<<"Case "<<i<<": "<<0<<endl;
            else{
                ll ans=getAns(area);
                for(int j=1;j<minPosSide;j++){
                    if(area%j==0)
                        ans--;
                }
                cout<<"Case "<<i<<": "<<ans<<endl;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    solve();
}
