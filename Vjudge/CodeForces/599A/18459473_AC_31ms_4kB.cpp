#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long a[4],n,m,x,y;
    while(cin>>n>>m>>x)
        cout<<min(min((n*2)+(m*2),min((n*2)+(x*2),(x*2)+(m*2))),(n+x+m))<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

