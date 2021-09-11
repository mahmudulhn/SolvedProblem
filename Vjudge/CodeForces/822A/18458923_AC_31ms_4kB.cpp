#include<bits/stdc++.h>
using namespace std;
unsigned long long f(int n)
{
    if(n==1)
        return 1;
    else
        return n*f(n-1);
}
void solve()
{
    long long n,k;
    while(cin>>n>>k)
    {
        int x=min(n,k);
        cout<<f(x)<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}







