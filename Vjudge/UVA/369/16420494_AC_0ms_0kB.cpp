#include<bits/stdc++.h>

using namespace std;

long long getfectorial(long long n)
{
    if(n==1)
        return 1;
    return n*getfectorial(n-1);
}
long long cal(long long n,long long m)
{
    long long mul=1;
    for(long long i=1;i<=m;i++)
    {
         mul*=n;
         mul/=i;
         n--;
    }
    return mul;
}

int main()
{
    long long n,m;
C:  while(scanf("%lld%lld",&n,&m)==2)
    {
        if(n==0&&m==0)
            break;
        if(n-m<m)
            cout<<n<<" things taken "<<m<<" at a time is "<<cal(n,n-m)<<" exactly.\n";
        else
            cout<<n<<" things taken "<<m<<" at a time is "<<cal(n,m)<<" exactly.\n";
}

    return 0;
}