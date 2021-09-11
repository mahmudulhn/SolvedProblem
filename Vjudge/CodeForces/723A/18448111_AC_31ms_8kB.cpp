#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a[3];
    while(cin>>a[0]>>a[1]>>a[2])
    {
        sort(a,a+3);
        cout<<abs(a[1]-a[0]+a[2]-a[1])<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
