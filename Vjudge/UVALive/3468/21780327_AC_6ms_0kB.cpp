#include<bits/stdc++.h>
using namespace std;
void solve(){
    //freopen("in.txt","r",stdin);
    int n;
    while(cin>>n&&n){
        int a[n],temp=0,ans=0,start=0,ed=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0)
                temp++;
            else{
                if(ans==0&&start==0)
                    start=temp;
               // cout<<start<<endl;
                ans+=(temp/2);
                //cout<<temp<<" ";
                temp=0;

            }
        }
        //cout<<temp<<" ";
       // cout<<start<<" "<<temp<<endl;
        ans+=(temp/2);

        //cout<<a[0]<<" "<<a[n-1]<<endl;
        if((start%2)==1&&(temp%2)==1&&(a[0]==0&&a[n-1]==0)||(temp==n&&(temp%2==1))||(start==n&&(start%2==1))){
            ans++;
            //cout<<"ok"<<endl;
        }
        cout<<ans<<endl;
       //cout<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

