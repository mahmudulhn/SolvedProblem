#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isprime[10005];
int nothing=0;
vector<int>prime;
unordered_map<int,int>mp;
unordered_map<int,int>::iterator it;
int factors[10005];
//unordered_set<int>v;
//unordered_set<int>::iterator it;
string str="1",temp="";
void sieve(){
    for(int i=2;i<=10000;++i){
        if(!isprime[i]){
            prime.push_back(i);
            //cout<<i<<endl;
            for(int j=i+i;j<=10000;j+=i) isprime[j]=true;
        }
    }
    //cout<<prime.size()<<endl;
}
void add(string s,int count_){
    string nw="";
    reverse(s.begin(),s.end());
    while(count_--) s.push_back('0');
    //cout<<s<<" "<<temp<<endl;
    reverse(s.begin(),s.end());
    int ls=s.size(),ltemp=temp.size();
    for(int i=0; i<ls || i<ltemp; i++){
        int a=0,b=0;
        if(i<ls) b=s[i]-'0';
        if(i<ltemp) a=temp[i]-'0';
        //cout<<a<<" "<<b<<endl;
        b=(b+a);
       // cout<<b<<endl;
        if(nw==""){
            nw.push_back((b%10)+'0');
         //   cout<<nw<<endl;
        }
        else{
            int x=(nw[nw.size()-1]-'0')+b;
           // cout<<nw[nw.size()-1]<<" "<<b<<endl;
            nw[nw.size()-1]=(x%10)+'0';
            b=x;
        }
       // cout<<b<<endl;
        if(b>9) nw.push_back((b/10)+'0');
        else if(i<ls-1 || i<ltemp-1 ) nw.push_back('0');
    }
    //if(nw[nw.size()-1]=='0')
    //    nw.pop_back();
   // cout<<nw<<endl;
    temp=nw;
}

void mul(ll s){
    //cout<<str<<endl;
    int ln=str.size(),carry=0;
    for(int i=0;i<ln;++i){
        carry+=((str[i]-'0')*s);
        str[i]=(carry%10)+'0';
        carry/=10;
    }
    while(carry){
        str.push_back((carry%10)+'0');
        carry/=10;
    }
}

ll pw(int a,int b){
    ll ans=1;
    while(b--){
        ans*=a;
    }
    return ans;
}
void findRes(){
    for(it=mp.begin();it!=mp.end();it++){
        int count_=it->second,prime=it->first;
        ll temp=pw(prime,count_);
//        string s="";
//        cout<<temp<<endl;
//        while(temp>=10){
//            s.push_back(temp%10+'0');
//            temp/=10;
//        }
//        s.push_back(temp%10+'0');
//        cout<<s<<endl;
        mul(temp);
    }
}

/*void findReslt(){
    for(it =v.begin();it!=v.end();it++){
        int aa=*it;
        int count_=factors[aa],p=aa;
        int temp=pw(p,count_);
        string s="";
        //cout<<temp<<endl;
        while(temp>=10){
            s.push_back(temp%10+'0');
            temp/=10;
        }
        s.push_back(temp%10+'0');
       // cout<<s<<endl;
        mul(s);
    }
}

*/
void primeFac(int n){
    int ln=prime.size();
    for(int i=0;i<ln and prime[i]*prime[i]<=n;i++){
        if(!(n%prime[i])){
            //v.push_back(prime[i]);
            int count_=0;
            while(!(n%prime[i])){
                count_++;
                n/=prime[i];
            }
            mp[prime[i]]=max(mp[prime[i]],count_);
        }
    }
    if(n>1){
        mp[n]=max(mp[n],1);
        //v.push_back(prime[i]);
    }

}
/*
void primeFact(int n){
    for(int i=0;i<prime.size() and prime[i]*prime[i]<=n;i++){
        if(!(n%prime[i])){
            v.insert(prime[i]);
            int count_=0;
            while(!(n%prime[i])){
                count_++;
                n/=prime[i];
            }
            factors[prime[i]]=max(factors[prime[i]],count_);
        }
    }
    if(n>1){
        factors[n]=max(factors[n],1);
        v.insert(n);

    }
}
*/
int main(){
    /*ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);*/
    sieve();
    int tc;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //while(cin>>tc){
    scanf("%d",&tc);
        for(int j=1;j<=tc;++j){
            str="1";
            //v.clear();
            mp.clear();
            //memset(factors,0,sizeof factors);
            int n;
            //cin>>n;
            scanf("%d",&n);
            int a[n];
            for(int i=0;i<n;i++){
                //cin>>a[i];
                scanf("%d",&a[i]);
                primeFac(a[i]);
            }
            findRes();
            reverse(str.begin(),str.end());
            //char anssss[1000000];
            //str.copy(anssss,str.size()-1,0);
            printf("Case %d: ",j);
            cout<<str<<endl;
            //cout<<"Case "<<j<<": "<<str<<endl;
        }
   // }
}
