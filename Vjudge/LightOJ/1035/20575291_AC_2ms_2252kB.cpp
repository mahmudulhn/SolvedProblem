#include<bits/stdc++.h>
using namespace std;
#define Max 100
bool isprime[Max+6];
vector<int>prime;
pair<int,int>p;
vector<pair<int,int> >fac[105];
map<int,int>mp;
map<int,int>::iterator it;
void seive(){
    for(int i=2;i<=Max;++i){
        if(!isprime[i]){
            prime.push_back(i);
            for(int j=i;j<=Max;j+=i){
                isprime[j]=true;
            }
        }
    }
   // for(int i=0;i<prime.size();++i)
   //    cout<<prime[i]<<" ";
   // cout<<endl;
}
void pre_cal(){
    int temp;
    for(int i=2;i<=100;++i){
        temp=i;
        for(int j=0;j<prime.size()&&prime[j]<=temp*temp;++j){
            while(temp%prime[j]==0){
                temp/=prime[j];
                mp[prime[j]]++;
            }
        }
        if(temp!=1)
            mp[temp]++;
        for(it=mp.begin();it!=mp.end();++it){
            int a,b;
            a=it->first;
            b=it->second;
            //cout<<i<<" "<<a<<"*"<<b<<" ";
            fac[i].push_back(make_pair(a,b));
        }
        //cout<<endl;
    }
}
void solve(){
    int n;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin>>n){
        for(int i=1;i<=n;++i){
            int val,temp;
            map<int,int>mp;
            map<int,int>::iterator it;
            cin>>val;
            temp=val;
            cout<<"Case "<<i<<": "<<temp;
            //Case 2: 3 = 2 (1) * 3 (1)
            for(int j=0;j<fac[val].size();++j){
                p=fac[val][j];
                if(!j)
                    cout<<" = "<<p.first<<" ("<<p.second<<")";
                else
                    cout<<" * "<<p.first<<" ("<<p.second<<")";
            }
            cout<<endl;
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    seive();
    pre_cal();
    solve();
}
