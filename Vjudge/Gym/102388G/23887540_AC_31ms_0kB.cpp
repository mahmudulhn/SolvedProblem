#include<bits/stdc++.h>
using namespace std;
void solve(){
    int tc;
    int n,a,b;
    while(cin>>tc){
        for(int i=0;i<tc;i++){
            cin>>n>>a>>b;
            if(n<=a)
                cout<<1<<endl;
            else if(a<=b)
                cout<<-1<<endl;
            else{
                int count_=0,temp=a;
                while(a<n){
                    count_++;
                    a-=b;
                    if(a<n){
                        a+=temp;
                    }
                    else
                        break;
                }
                cout<<count_+1<<endl;
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
