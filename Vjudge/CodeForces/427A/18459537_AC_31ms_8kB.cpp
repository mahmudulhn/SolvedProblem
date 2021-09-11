#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    while(cin>>n)
    {
        int a[n],count=0,free=0,m;
        while(n--)
        {
            cin>>m;
            if(m<0&&free<=0)
                count++;
            else if(m<0&&free>0)
                free--;
            else if(m>0)
                free+=m;
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


