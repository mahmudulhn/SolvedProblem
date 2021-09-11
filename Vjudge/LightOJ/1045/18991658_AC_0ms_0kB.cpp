#include<bits/stdc++.h>
using namespace std;
double num[1000005];
double base[1005];
void pre()
{
    num[0]=0;
    for(int i=1;i<=1000002;i++)
    {
        if(i<=1000)
        {
            base[i]=log(i);
            num[i]=num[i-1]+base[i];
        }
        else
            num[i]=num[i-1]+log(i);

    }
}
void solve()
{
    //freopen("in.txt","r",stdin);
    int t;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            int n,b,sum=0;
            cin>>n>>b;
            long long dig=floor(num[n]/base[b])+1;
            cout<<"Case "<<i<<": "<<dig<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //seive();
    pre();
    solve();
}

