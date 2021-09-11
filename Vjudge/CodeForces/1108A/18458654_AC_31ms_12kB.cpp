#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,k;
    while(cin>>n)
    {
        while(n--)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            if(a!=c)
                cout<<a<<" "<<c<<endl;
            else
            {
                if(c+1<=d)
                    cout<<a<<" "<<c+1<<endl;
                else
                    cout<<a+1<<" "<<c<<endl;
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





