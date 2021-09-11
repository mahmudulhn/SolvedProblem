#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a[3];
    while(cin>>a[0]>>a[1]>>a[2])
    {
        sort(a,a+3);
        int ans=0;
        if(a[0]+a[1]<=a[2])
            cout<<abs((a[0]+a[1])-a[2])+1<<endl;
        else
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


