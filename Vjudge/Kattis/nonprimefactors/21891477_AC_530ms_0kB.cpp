#include<bits/stdc++.h>
using namespace std;
#define M 2000002
//bool isprime[M+2];
int fac[M+5];
int primefac[M+5];
vector<int>prime;
void seive(){
    //memset(fac,-1,sizeof fac);
    for(int i=2;i<=M;i++)
    {
        if(!fac[i]++)
            prime.push_back(i);
        for(int j=i;j<=M;j+=i)
            fac[j]++;
        //}
    }
    //int s=sqrt(M);
    for(int i=0;i<prime.size();i++){
        for(int j=prime[i];j<=M;j+=prime[i])
            primefac[j]++;
    }
}
void fucking_solve(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int n;
        scanf("%d",&n);
        printf("%d\n",fac[n]-primefac[n]);
    }
}
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    seive();
    fucking_solve();
}
