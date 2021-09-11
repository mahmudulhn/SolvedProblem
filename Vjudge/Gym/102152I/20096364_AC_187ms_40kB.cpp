#include<bits/stdc++.h>
using namespace std;

void solve(){
    //freopen("in.txt.txt","r",stdin);
    int tc;
    while(cin>>tc){
        while(tc--){
            int n,k;
            cin>>n>>k;
            int a[n],sum=0,count_n=0,c=0,x=0;
            for(int i=0;i<n;++i)
            {
                cin>>a[i];
                sum+=a[i];
                if(a[i]<=0)
                    count_n++;
            }
            sort(a,a+n);
            //for(int i=0;i<n;i++)
            //    cout<<a[i]<<" ";
           // cout<<endl;
            int i=0;
            c=count_n;
            x=0;
            //cout<<count_n<<endl;
            while(k&&count_n){
                sum+=(a[i]*(-2));
                i++;
                k--;
                count_n--;
            }
            //cout<<sum<<" "<<k<<" "<<count_n<<endl;
            if(k%2==1){
                if(c==0){
                    //cout<<sum<<endl;
                    sum+=(a[c]*(-2));
                    //cout<<a[c]*(-2)<<endl;
                }
                else if(a[c-1]*(-1)<a[c])
                    sum-=(a[c-1]*(-2));
                else
                    sum+=(a[c]*(-2));
            }
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
