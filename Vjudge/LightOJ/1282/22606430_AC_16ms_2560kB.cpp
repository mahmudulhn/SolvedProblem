#include<bits/stdc++.h>
using namespace std;
#define ll long long
int findLeadingDig(ll n, ll k){
    double q=log10(n);
    ll p=(int)q;
    q=q-p;
    q*=k;
    q=q-(int)q;
    double res=pow(10,q);
    p*=k;
   // cout<<p<<endl;
    if(res-((int)res)==0&&p<2)
        return res;
    else
        return res*100;
}
int findTrailingDig(ll n, ll k){
    if(k==0)
        return 1;
    else if(k%2==0){
        int a=findTrailingDig(n,k/2);
        a=(a%1000);
        return (a*a)%1000;
    }
    else
        return ((n%1000)*(findTrailingDig(n,k-1)%1000))%1000;

}
void solve(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            ll n,k;
            cin>>n>>k;
            int Leading=findLeadingDig(n,k),Trailing=findTrailingDig(n,k);
            //findLeadingDig(n,k);
            cout<<"Case "<<i<<": ";
            if(Leading<10)
                cout<<"00";
            else if(Leading<100)
                cout<<"0";
            cout<<Leading<<" ";
            if(Trailing<10)
                cout<<"00";
            else if(Trailing<100)
                cout<<"0";
            cout<<Trailing<<endl;
        }
        //findTrailingDig(n,k);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
