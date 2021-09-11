#include<bits/stdc++.h>
using namespace std;

void solve(){
    //freopen("in.txt.txt","r",stdin);
    int tc;
    while(cin>>tc){
        while(tc--){
            int count=0;
            string s,str;
            cin>>s>>str;
            if(s.size()!=str.size())
                cout<<"No"<<endl;
            else{
                string a="",b="";
                for(int i=0;i<s.size();i++){
                    if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
                        a+=s[i];
                }
                for(int i=0;i<str.size();i++){
                    if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u')
                        b+=str[i];
                }
                if(a==b)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
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


