#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
long long lcm(long long a,long long b)
{
    return (a*b)/gcd(a,b);
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
            long long a,b,lc;
            cin>>a>>b>>lc;
            long long x;
            bool flag=false;
            if(a%b==0)
                x=a;
            else if(b%a==0)
                x=b;
            else
                x=lcm(a,b);
//            x=lcm(a,b);
            long long temp=lc/x;
            //if(lc%temp!=0)

            if(lc%a!=0||lc%b!=0)
                cout<<"Case "<<i<<": impossible"<<endl;
            else
            {
                long long y=temp;
                while(1)
                {
                    if(lcm(x,y)==lc)
                        break;
                    y+=temp;
                    //cout<<y<<endl;
                    if(y>lc)
                    {
                        cout<<"Case "<<i<<": impossible"<<endl;
                        flag=true;
                        break;
                    }
                }
                if(!flag)
                    cout<<"Case "<<i<<": "<<y<<endl;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //seive();
    //pre();
    solve();
}

