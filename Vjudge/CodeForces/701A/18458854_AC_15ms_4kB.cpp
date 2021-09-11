#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,k;
    while(cin>>n)
    {
        vector<pair<int,int> >v;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(make_pair(k,i));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n/2;i++)
            cout<<v[i].second+1<<" "<<v[n-i-1].second+1<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}






