#include<bits/stdc++.h>
#define ll long long
#define Max 100000
using namespace std;
void solve(){
    //freopen("in.txt","r",stdin);
    int n,m;
    while(cin>>n>>m&&n&&m){
        set<int>s;
        for(int i=0;i<=n+1;++i)
            s.insert(i);
        for(int i=1;i<=m;++i){
            int l,r;
            set<int>::iterator it1,it2;
            cin>>l>>r;
            it1=s.upper_bound(l-1);
            it2=s.lower_bound(r+1);
            s.erase(it1,it2);
            it1=s.lower_bound(l);
            it2=s.upper_bound(r);
            int ans1,ans2;
            it1--;
            //it4++;
            ans1=*it1;
            ans2=*it2;
          //  cout<<ans1<<" "<<ans2<<endl;
            if(ans1==0)
                cout<<"*"<<" ";
            else
                cout<<ans1<<" ";
            if(ans2==n+1)
                cout<<"*"<<endl;
            else
                cout<<ans2<<endl;
        }
        cout<<"-"<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   // tophi();
    solve();
}

