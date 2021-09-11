#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            int a[3];
            for(int j=0;j<3;j++)
                cin>>a[j];
            sort(a,a+3);
            cout<<"Case "<<i<<": "<<a[1]<<endl;
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
