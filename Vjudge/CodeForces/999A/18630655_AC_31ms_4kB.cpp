#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    while(cin>>n>>k)
    {
        int a[n],count=0,flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=k&&flag==0)
                count++;
            else
                flag=1;
        }
        //cout<<count<<endl;
        if(count<n)
        {
            for(int i=n-1;i>=0;i--)
            {
                if(a[i]<=k&&flag==1)
                    count++;
                else
                    flag=0;
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
