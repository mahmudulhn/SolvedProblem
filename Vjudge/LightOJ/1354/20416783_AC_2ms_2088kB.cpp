#include<bits/stdc++.h>
#define ll long long
using namespace std;
string temp="";
void fin(int n){
    temp="";
    while(n){
        temp+=(n%2)+'0';
        n/=2;
    }
    while(temp.size()<8)
        temp+='0';
    reverse(temp.begin(),temp.end());
}
void solve(){
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            int a,b,c,d;
            scanf("%d.%d.%d.%d",&a,&b,&c,&d);
            string s,ans="";
            cin>>s;
            fin(a);
            ans+=temp;
            ans+=".";
            fin(b);
            ans+=temp;
            ans+=".";
            fin(c);
            ans+=temp;
            ans+=".";
            fin(d);
            ans+=temp;
            //cout<<ans<<endl;
            if(s==ans)
                cout<<"Case "<<i<<": Yes"<<endl;
            else
                cout<<"Case "<<i<<": No"<<endl;
        }
    }
}
int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
    solve();
}
