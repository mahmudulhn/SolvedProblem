#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    while(cin>>n)
    {
        int a[n];
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i-1]>=a[i]&&i!=0)
                v.push_back(a[i-1]);
            if(i==n-1)
                v.push_back(a[i]);
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