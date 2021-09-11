#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        int a[n],ans=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i+=2)
            ans+=abs(a[i]-a[i+1]);
        cout<<ans<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

