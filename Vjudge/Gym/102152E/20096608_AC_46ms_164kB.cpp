#include<bits/stdc++.h>
using namespace std;

void solve(){
    //freopen("in.txt.txt","r",stdin);
    int tc;
    while(cin>>tc){
        while(tc--){
            int n,m;
            cin>>n>>m;
            string s,c,str;
            cin>>s;
            cin>>c;
            cin>>str;
            //cout<<s<<" "<<c<<" "<<str<<endl;
            int sum=0;
            int a[30];
            memset(a,-1,sizeof a);
            for(int i=0;i<n;i++){
                if(a[s[i]-'a']==-1)
                    a[s[i]-'a']=c[i]-'0';
                else
                    a[s[i]-'a']=min(a[s[i]-'a'],c[i]-'0');
            }
            int f=0;
            for(int i=0;i<m;++i){
                if(a[str[i]-'a']==-1)
                    f=1;
                else
                    sum+=a[str[i]-'a'];
            }
           // for(int i=0;i<30;i++)
                //cout<<a[i]<<" ";
            if(f==1)
                cout<<-1<<endl;
            else
                cout<<sum<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
