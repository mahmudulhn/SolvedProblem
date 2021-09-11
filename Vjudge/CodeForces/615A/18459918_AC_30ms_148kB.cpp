#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n>>m)
    {
        set<int>s;
        int a;
        while(n--)
        {
            cin>>a;
            while(a--)
            {
                int x;
                cin>>x;
                s.insert(x);
            }
        }
        if(s.size()==m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
