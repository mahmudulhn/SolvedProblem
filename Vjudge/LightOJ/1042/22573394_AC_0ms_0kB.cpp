#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int n;
int tc;
void conB(){
    v.clear();
    while(n>0){
        v.push_back(n%2);
        n/=2;
    }
//    for(int i=0;i<v.size();i++)
//        cout<<v[i]<<endl;
}
void findNextBit(){
    int startPoint=-1,endPoint=-1;
    bool flag=false;
    for(int i=0;i<v.size();i++){
        if(v[i]==1&&!flag){
            startPoint=i+1;
            v[i]=0;
            flag=true;
            //i++;
            //cout<<i<<endl;
        }
        if(flag&&v[i]==0&&(i+1)!=startPoint){
            endPoint=i;
            v[i]=1;
            //cout<<i<<endl;
            break;
        }
    }
    if(endPoint==-1){
        v.push_back(1);
        endPoint=v.size()-1;
    }
    int Count=0;
    //cout<<startPoint<<" "<<endPoint<<endl;
    for(int i=startPoint;i<endPoint;i++){
        if(v[i]==1&&startPoint!=endPoint){
            Count++;
            v[i]=0;
           // cout<<"ok"<<endl;
        }
    }
    int i=0;
    while(Count){
        if(v[i]==0){
            v[i]=1;
            Count--;
        }
        i++;
    }
    //cout<<startPoint<<" "<<endPoint<<endl;
   // for(int i=0;i<v.size();i++)
    //    cout<<v[i]<<endl;

}
int reCon(){
    int res=0;
    for(int i=0;i<v.size();i++){
        res+=(pow(2,i)*v[i]);
    }
    return res;
    //v.clear();
}
void solve(){
    //freopen("in.txt","r",stdin);
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            cin>>n;
           // v.clear();
            conB();
            findNextBit();
            cout<<"Case "<<i<<": "<<reCon()<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
