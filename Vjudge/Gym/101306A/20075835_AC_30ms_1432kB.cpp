#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    int n,m=-1;
    string s,str="",ans="";
    vector<string>v[100005];
    cin>>n;
    cin.ignore();
    cin>>s;
    int mark[10];
    memset(mark,0,sizeof mark);
    for(int i=0;i<n;i++)
        mark[s[i]-'0']++;
    for(int i=0;i<10;i++)
        m=max(m,mark[i]);
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(mark[i]==m)
            count++;
    }
    cout<<count<<endl;
    for(int i=0;i<10;i++)
    {
        if(mark[i]==m)
        {
            for(int j=0;j<m;j++)
                cout<<i;
            cout<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
