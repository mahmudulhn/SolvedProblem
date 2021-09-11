#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            int m;
            cin>>m;
            int a[m];
            for(int j=0;j<m;j++)
                cin>>a[j];
            sort(a,a+m);
            cout<<"Case "<<i<<": "<<a[m-1]<<endl;
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
