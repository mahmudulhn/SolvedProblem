#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        int sum1=0,sum2=0;
        int x;
        while(n--)
        {
            cin>>x;
            if(x>0)
                sum1+=x;
            else
                sum2+=x;
        }
            cout<<abs(sum1-sum2)<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}