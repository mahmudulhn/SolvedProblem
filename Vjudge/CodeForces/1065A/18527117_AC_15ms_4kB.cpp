
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    unsigned long long t,s,a,b,c;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>s>>a>>b>>c;
            cout<<(s/c)+(((s/c)/a)*b)<<endl;
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

