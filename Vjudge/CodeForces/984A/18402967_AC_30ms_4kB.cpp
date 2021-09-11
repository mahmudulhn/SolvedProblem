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
        if(n%2==0)
            cout<<a[(n/2)-1]<<endl;
        else
            cout<<a[n/2]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

