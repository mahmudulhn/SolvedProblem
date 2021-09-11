#include<bits/stdc++.h>
using namespace std;
int check[107];
void play(){
    int tc,n,k;
    while(cin>>tc){
        while(tc--){
            cin>>n>>k;
            memset(check,0,sizeof check);
            long long a[n];
            for(int i=0;i<n;i++){
                cin>>a[i];
                int count_=0;
                while(a[i]){
                    check[count_]+=a[i]%k;
//                    if(count_[c])
//                        cout<<a[i]<<" "<<count_[c]<<" "<<c<<endl;
                    count_++;
                    a[i]/=k;

                }
            }
            bool zzzz=false;
            for(int i=0;i<=100;i++){
                if(check[i]>1){
                    cout<<"NO"<<endl;
                    zzzz=1;
                    break;
                }
            }
            if(!zzzz)
                cout<<"YES"<<endl;

        }
    }

}

int main(){
    //freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    play();

}
