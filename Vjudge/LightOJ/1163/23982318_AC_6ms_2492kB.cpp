#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>v;
void Bsearch(ll low,ll high,ll key){
        while(low<=high){
            ll mid=(low+high)/2;
            //cout<<mid<<" "<<(mid-(mid/10))<<endl;
            if((mid-(mid/10))==key){
                v.push_back(mid);
                if(((mid-1)-((mid-1)/10))<key)
                    low=mid+1;
                else
                    high=mid-1;
            }
            else if((mid-(mid/10))<key)
                low=mid+1;
            else
                high=mid-1;
        }
}
void solve(){
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            v.clear();
            ll n,temp;
            cin>>n;
            temp=n;
            ll prob_b=n/10;
            ll prob_a=n+prob_b;
            int count_=0;
            while(temp>=10){
                temp/=10;
                count_++;
            }
//            cout<<count_<<endl;
            ll high;
            while(high<prob_a){
                temp++;
                high=temp*pow(10,count_);
            }

//            cout<<prob_a<<" "<<temp<<" "<<n<<endl;
            Bsearch(prob_a,high+1,n);
            sort(v.begin(),v.end());
            cout<<"Case "<<i<<":";
            for(int j=0;j<v.size();j++)
                cout<<" "<<v[j];
            cout<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
