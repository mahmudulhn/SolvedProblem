#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[100];
ll genFib(int n){
    if(dp[n]!=0||n==0)
        return dp[n];
    return dp[n]=genFib(n-1)+genFib(n-2);
}
void solve(){
    int n;
    while(cin>>n&&n){
        cout<<dp[n]<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    dp[1]=1;
    dp[0]=1;
    genFib(81);
    solve();
}

