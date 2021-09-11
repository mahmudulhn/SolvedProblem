#include<bits/stdc++.h>
using namespace std;
void play(){
    int n;
    while(cin>>n){
        int a[n],count_=1,ans=-4;
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i and a[i]==a[i-1]) count_++;
            else{
                v.push_back(count_);
                count_=1;
            }
        }
        if(count_!=1)
            v.push_back(count_);
        for(int i=0;i<v.size()-1;i++) ans=max(ans,min(v[i],v[i+1]));
        cout<<ans*2<<endl;
    }

}

int main(){
    //freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    play();

}
