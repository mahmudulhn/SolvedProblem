#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        int a[]={5,4,3,2,1},ans=0;
        for(int i=0;i<5;i++)
        {
            ans+=(n/a[i]);
            n%=a[i];
        }
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

