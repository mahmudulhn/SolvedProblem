#include<bits/stdc++.h>
using namespace std;
unsigned long long con(string s){
    unsigned long long temp=0;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();++i){
        temp+=((s[i]-'0')*(pow(2,i)));
    }
    return temp;
}
int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
void solve(){
    int n;
    //freopen("in.txt","r",stdin);
    while(cin>>n){
        for(int i=1;i<=n;i++){
            string s1,s2;
            cin>>s1>>s2;
            int temp=0;
            temp=gcd(con(s1),con(s2));
            //cout<<temp<<endl;
            //cout<<con(s1)<<" "<<con(s2)<<endl;
            if(temp>1)
                cout<<"Pair #"<<i<<": All you need is love!"<<endl;
            else
                cout<<"Pair #"<<i<<": Love is not all you need!"<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    solve();
}

