#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        int x=max(n,n/10);
        //cout<<x<<endl;
        //cout<<n-(n%100)+(n%10)<<endl;
        cout<<max(x,((n-(n%100))/10)+(n%10))<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
