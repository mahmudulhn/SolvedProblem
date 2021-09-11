#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        int a[n];
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[a[i]]==1)
                v.push_back(a[i]);
            mp[a[i]]--;
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

