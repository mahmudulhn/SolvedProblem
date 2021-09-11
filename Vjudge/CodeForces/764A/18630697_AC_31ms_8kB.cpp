#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,z;
    while(cin>>n>>m>>z)
    {
        int count=0;
        for(int i=1;i<=z;i++)
        {
            if(i%n==0&&i%m==0)
                count++;
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
