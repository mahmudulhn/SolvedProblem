#include<bits/stdc++.h>
using namespace std;
void play(){
    int n,a,b;
    while(cin>>n>>a>>b){
        int ans=-1;
        for(int i=1;i<n;i++){
            int x=min((a/i),b/(n-i));
            //cout<<abs(x)<<endl;
            ans=max(ans,abs(x));
        }
        cout<<ans<<endl;
    }

}

int main(){
    //freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    play();

}

