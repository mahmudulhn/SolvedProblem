#include<bits/stdc++.h>
using namespace std;
int x,y,c;
void ex_gcd(int a,int b)
{
    if(b==0)
    {
        c=a;
        x=1;
        y=0;
        return ;
    }
    ex_gcd(b,a%b);
    int temp;
    temp=x;
    x=y;
    y=temp-(a/b)*y;
}
void solve()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b;
    while(cin>>a>>b)
    {
        ex_gcd(a,b);
        cout<<x<<" "<<y<<" "<<c<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

