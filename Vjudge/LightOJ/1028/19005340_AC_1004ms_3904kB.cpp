#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool isprime[M+2];
vector<int>prime;
void seive()
{
    int s=sqrt(M);
    isprime[1]=true;
    for(int i=2;i<=s;i++)
    {
        if(!isprime[i])
        {
            for(int j=i*i;j<=M;j+=i)
                isprime[j]=true;
        }
    }
    //prime.push_back(2);
    for(int i=2;i<=M;i++)
    {
        if(!isprime[i])
            prime.push_back(i);
    }
}
void solve()
{
    int t;
    while(scanf("%d",&t)==1)
    {
        for(int i=1;i<=t;i++)
        {
            long long n,m;
            scanf("%lld",&n);
            m=n;
            long long s;
            int count,ans=1;
            //s=sqrt(n);
            if(n<=M&&!isprime[n])
                ans=2;
            else
            {
                for(int j=0;j<prime.size()&&j*j<n;j++)
                {
                    if(n%prime[j]==0)
                    {
                        count=1;
                        while(n%prime[j]==0)
                        {
                            n=n/prime[j];
                            count++;
                        }
                        ans*=count;
                    }
                }
                if(n!=1)
                    ans*=2;
                //ans--;
            }
            printf("Case %d: %d\n",i,ans-1);
        }
    }
}
int main()
{
    seive();
    solve();
}
