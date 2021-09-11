#include<bits/stdc++.h>
using namespace std;
#define M 5000000
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
    for(int i=1;i<=M;i++)
        phi[i]=phi[i-1]+(phi[i]*phi[i]);
}
void solve()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    while(scanf("%d",&t)==1)
    {
        for(int i=1;i<=t;i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            printf("Case %d: %llu\n",i,phi[b]-phi[a-1]);
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
