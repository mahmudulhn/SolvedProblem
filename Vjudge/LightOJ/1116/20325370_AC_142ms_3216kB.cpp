#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
bool isprime[MAX+2];
//vector<int>prime;
void seive(){
    //prime.push_back(2);
    int s=sqrt(MAX);
    for(int i=2;i<=s;i++){
        //cout<<1;
        if(!isprime[i]){
           // prime.push_back(i);
            //cout<<2;
            for(int j=i*i;j<=MAX;j+=i){
                isprime[j]=true;
                //cout<<3;
            }
            //cout<<4;
        }
    }
}
long long gcd(long long n,long long m){
    if(m==0) return n;
    return gcd(m,n%m);
}
long long lcm(long long n,long long m){
    return n*m/gcd(n,m);
}
void solve(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;++i){
            long long n;
            cin>>n;
            if(n%2==1)
                cout<<"Case "<<i<<": Impossible"<<endl;
            else{
                long long m=1;
                while(n%2==0){
                    n/=2;
                    m*=2;
                }
                cout<<"Case "<<i<<": "<<n<<" "<<m<<endl;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //seive();
    solve();
}

