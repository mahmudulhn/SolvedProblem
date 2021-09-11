#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    int tc;
    while(cin>>tc&&tc){
            queue<int>s;
            bool f=false;
            for(int i=1;i<=tc;i++)
                s.push(i);
            if(tc==1)
                cout<<"Discarded cards:";
            else
                cout<<"Discarded cards: ";
            while(s.size()!=1)
            {
                int a=s.front();
                s.pop();
                if(!f){
                    cout<<a;
                    f=true;
                }
                else{
                    cout<<", "<<a;
                }
                a=s.front();
                s.pop();
                s.push(a);
            }
            cout<<endl;
            int a=s.front();
            cout<<"Remaining card: "<<a<<endl;
    }
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    solve();
}

