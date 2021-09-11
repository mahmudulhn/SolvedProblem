#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        int count=0,a[n];
        set<int>s;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<(abs(a[0]-a[n-1])+1)-n<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
