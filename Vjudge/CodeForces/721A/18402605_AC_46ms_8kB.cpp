#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        string s;
        cin>>s;
        vector<int>v;
        int flag=0,count=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B'&&flag==0&&i==n-1)
            {
                count++;
                flag=1;
            }
            else if(s[i]=='B'&&flag==0)
                count++;
            else if((s[i]=='W'&&count!=0)||(i==n-1&&count!=0))
                flag=1;
            if(count>0&&flag==1)
            {
                ans++;
                //cout<<count<<endl;
                v.push_back(count);
                count=0;
                flag=0;
            }
        }
        cout<<ans<<endl;
        if(v.size()>0)
        {
            for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            cout<<endl;
            v.clear();
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


