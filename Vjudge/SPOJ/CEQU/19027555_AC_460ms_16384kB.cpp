#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
void solve()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(c%gcd(a,b)==0)
                cout<<"Case "<<i<<": Yes"<<endl;
            else
                cout<<"Case "<<i<<": No"<<endl;
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

