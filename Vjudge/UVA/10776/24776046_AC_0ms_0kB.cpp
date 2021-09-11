#include<bits/stdc++.h>
using namespace std;
string str;
int r;
bool vis[35];
int indx[35];
string ans="";
void backtrack(int pos){
    if(ans.size()==r){
        //sort(ans.begin(),ans.end());
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<str.size();i++){
        if( i>0 and indx[i]==indx[i-1] and vis[i-1]==0) continue;
        if(pos>0 and (ans[pos-1]-'a')>indx[i]) continue;
        if(!vis[i]){
            vis[i]=true;
            ans.push_back(indx[i]+'a');
            backtrack(pos+1);
            ans.pop_back();
            vis[i]=false;
        }
    }
}
int main(){
    //freopen("in.txt","r",stdin);
    while(cin>>str){
        cin>>r;
        memset(vis,0,sizeof vis);
        for(int i=0;i<str.size();i++) indx[i]=(int)str[i]-'a';
        sort(indx,indx+str.size());
        backtrack(0);
//       for(int i=0;i<str.size();i++)
//        cout<<indx[i]<<endl;
        ans="";
        str="";
    }
}
