#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int k,in=0,co=0;
        cin>>k;
        co=a[k-1];
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]==co)
                in=i;
        }
        cout<<in+1<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
