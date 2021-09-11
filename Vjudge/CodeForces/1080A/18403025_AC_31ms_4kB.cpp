#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a=2,b=5,c=8;
    int n,m;
    while(cin>>n>>m)
    {
        int x,y,z;
        x=(n*a)/m;
        if(x*m!=(a*n))
            x++;
        y=(n*b)/m;
        if(y*m!=(b*n))
            y++;
        z=(n*c)/m;
        if(z*m!=(c*n))
            z++;
        cout<<x+y+z<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}



