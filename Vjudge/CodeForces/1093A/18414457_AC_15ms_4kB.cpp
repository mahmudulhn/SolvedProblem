#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n)
    {
        while(n--)
        {
            int a[]={7,6,5,4,3,2},ans=0;
            cin>>m;
//            for(int i=0;i<6;i++)
//            {
//                ans+=(m/a[i]);
//                m%=a[i];
//            }
            cout<<m/2<<endl;
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
