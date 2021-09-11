
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a[n],count1=0,count2=0,x,y;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]+=m;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<=5)
                count1++;
        }
        cout<<count1/3<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
