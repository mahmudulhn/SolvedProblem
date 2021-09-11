#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,z,x,a,b,d;
    while(cin>>n>>m)
    {
        a=0;
        b=0;
        d=0;
        for(int i=1;i<=6;i++)
        {
            z=abs(i-n);
            x=abs(i-m);
            if(x>z)
                a++;
            else if(x<z)
                b++;
            else
                d++;
        }
        cout<<a<<" "<<d<<" "<<b<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

