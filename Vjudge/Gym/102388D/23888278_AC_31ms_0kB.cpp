#include<bits/stdc++.h>
using namespace std;
//ABCDEFGHIJKLMNOPQRSTUVQXYZ
void solve(){
    int tc;
    int n,a,b;
    while(cin>>tc){
        for(int i=0;i<tc;i++){
            string s,a;
            cin>>s;
            a=s;
            for(int i=0;i<s.size();i++){
                if(s[i]>='A'&&s[i]<='Z')
                    s[i]+=32;
                if(s[i]<='m')
                    s[i]+=13;
                else{
                    s[i]-=13;

                }
                if(a[i]>='a'&&a[i]<='z')
                    s[i]-=32;
            }
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
