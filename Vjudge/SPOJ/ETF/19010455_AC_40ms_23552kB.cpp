#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool isprime[M+5];
unsigned long long phi[M+5];
void tphi()
{
    for(int i=0;i<=M;i++)
        phi[i]=i;
    isprime[1]=true;
    for(int i=2;i<=M;i++)
    {
        if(!isprime[i])
        {
            for(int j=i;j<=M;j+=i)
            {
                isprime[j]=true;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
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
            int n;
            cin>>n;
            cout<<phi[n]<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tphi();
    solve();
}
