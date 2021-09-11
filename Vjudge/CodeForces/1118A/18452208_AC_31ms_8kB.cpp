#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        while(n--)
        {
            long long m,a,b;
            cin>>m>>a>>b;
            if(a<=(float)(b/2))
                cout<<m*a<<endl;
            else
            {
                if(m%2==0)
                    cout<<(m/2)*b<<endl;
                else
                    cout<<((m/2)*b)+a<<endl;
            }
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




