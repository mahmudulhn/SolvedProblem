#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        set<int>s;
        int x;
        while(n--)
        {
            cin>>x;
            if(x)
                s.insert(x);
        }
            cout<<s.size()<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

