#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,a;
    while(cin>>n>>m>>a){
        long long x,y;
        if(n%a==0)
            x=n/a;
        else
            x=n/a+1;
        if(m%a==0)
            y=m/a;
        else
            y=m/a+1;
        cout<<x*y<<endl;
    }
}
int main(){
    //freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

