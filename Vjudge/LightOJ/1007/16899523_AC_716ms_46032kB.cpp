#include<bits/stdc++.h>

using namespace std;
#define MAX 5000005
bool isprime[MAX+5];
unsigned long long phi[MAX+5];
void phitou()
{
      for(long long i=0;i<=MAX;i++)
            phi[i]=i;
      phi[1]=1;
      isprime[1]=true;
      for(long long i=2;i<=MAX;i++)
      {
            if(!isprime[i])
            {
                  for(long long j=i;j<=MAX;j+=i)
                  {
                        isprime[j]=true;
                        phi[j]=(phi[j]/i)*(i-1);
                  }
            }
      }
}
void qsum()
{
      for(long long i=1;i<=MAX;i++)
            phi[i]=phi[i-1]+(phi[i]*phi[i]);
}
int main()
{
      phitou();
      qsum();
      int n,m,test,t;
      scanf("%d",&test);
      t=test;
      while(test--)
      {
            scanf("%d%d",&n,&m);
            printf("Case %d: %llu\n",t-test,phi[m]-phi[n-1]);
      }
      return 0;
}
