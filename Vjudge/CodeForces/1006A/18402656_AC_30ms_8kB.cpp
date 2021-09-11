#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,a,b,k;
    while(cin>>n)
    {
        while(n--)
        {
            cin>>a;
            if(a%2==0)
                cout<<a-1<<" ";
            else
                cout<<a<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}



