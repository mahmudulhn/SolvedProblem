#include<bits/stdc++.h>

using namespace std;

long long getG(long long i,long long j)
{
    if(i%j==0)
        return j;
    else
    {
        return getG(j,i%j);
    }
}
long long getL(long long i, long long j)
{
    return (i/getG(i,j))*j;
}
int main()

{
    long long n,m;
    while(scanf("%lld%lld",&n,&m)==2)
    {
        cout<<getG(n,m)<<" "<<getL(n,m)<<"\n";
    }
    return 0;
}
