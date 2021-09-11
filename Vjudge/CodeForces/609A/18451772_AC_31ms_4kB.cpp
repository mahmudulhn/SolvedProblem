#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n>>m)
    {
        int count=0,ans=0;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        reverse(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(ans<m)
            {
                ans+=a[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}



