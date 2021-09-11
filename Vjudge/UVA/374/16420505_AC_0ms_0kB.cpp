#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

long long getBigMod(long long i,long long j,long long k)
{
    long long a;
    if(j==0)
        return 1;
    else if(j%2==0)
    {
        a=getBigMod(i,j/2,k);
        return (a*a)%k;
    }
    else
        return (getBigMod(i,j-1,k)*(i%k))%k;
}
int main()
{
    long long b,p,m;
    while(cin>>b>>p>>m)
    {
        printf("%lld\n",getBigMod(b,p,m));
    }
    return 0;
}