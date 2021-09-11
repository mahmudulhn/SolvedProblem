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
void solve(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;++i){
            int n,m;
            cin>>n>>m;
            n=n-m;

                set<int>s;
                set<int>::iterator it;
                int x=sqrt(n);
                for(int j=1;j<=x;++j){
                    if(n%j==0){
                        if(j>m){
                            s.insert(j);
                            //cout<<j<<" ";
                        }
                        if(n/j>m){
                            s.insert(n/j);
                            //cout<<n/j<<endl;
                        }
                    }
                }
                    if(s.empty())
                        cout<<"Case "<<i<<": impossible"<<endl;
                    else{
                        cout<<"Case "<<i<<":";
                        for(it=s.begin();it!=s.end();it++)
                            cout<<" "<<*it;
                        cout<<endl;
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
