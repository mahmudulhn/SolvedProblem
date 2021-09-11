#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,k;
    while(cin>>n>>k)
    {
        if((n/k)%2==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}



