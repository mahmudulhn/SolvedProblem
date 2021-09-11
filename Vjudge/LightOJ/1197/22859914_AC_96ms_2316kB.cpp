#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 100000
bool isprime[Max+6];
vector<int>prime;
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
int segSieve(ll l,ll r){
    bool seg[r-l+6];
    memset(seg,0,sizeof seg);
    ll as=0;
    if(l==1)
        seg[0]=true;
    //
    for(ll i=0; i<prime.size()&&prime[i]*prime[i]<=r; i++){
        ll crntPrm=prime[i];
        ll base=(l/crntPrm)*crntPrm;
        if(base<l) base+=crntPrm;
        for(ll j=base;j<=r;j+=crntPrm){
            seg[j-l]=true;
            //cout<<j-l<<endl;
        }
        if(base<=Max&&!isprime[base]){
            seg[abs(base-l)]=false;
        }

    }
    int c=0;
   // cout<<l<<r<<endl;
    for(int i=0;i<r-l+1;i++){

        if(!seg[i]){
           // cout<<i+l<<endl;
            c++;
        }
    }
    return c;
}
int main(){
    sieve();
//    freopen("in.txt","r",stdin);
//   // freopen("out.txt","w",stdout);
    ll l,r,tc;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        cin>>l>>r;
        cout<<"Case "<<i<<": "<<segSieve(l,r)<<endl;
    }
}
