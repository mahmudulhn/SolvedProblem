#include<bits/stdc++.h>
using namespace std;

void solve(){
    //freopen("in.txt.txt","r",stdin);
    int tc;
    while(cin>>tc){
        while(tc--){
            int count=0;
            string s;
            cin>>s;
            if(s[0]>='A'&&s[0]<='Z')
                cout<<"NO"<<endl;
            else{
                for(int i=0;i<s.size();++i){
                    if(s[i]>='A'&&s[i]<='Z')
                        count++;
                }
                if(count<=6)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

