#include<bits/stdc++.h>

using namespace std;

long long mul=1;
long long cal(long long n,long long m,long long i)
{
    if(i>m)
        return mul;
    else
    {
        mul*=n;
        mul/=i;
        return cal(--n,m,++i);
    }
}

int main()
{
    long long n,m;
    while(cin>>n>>m&&n!=0&&m!=0)
    {
        if(n-m<m)
            cout<<n<<" things taken "<<m<<" at a time is "<<cal(n,n-m,1)<<" exactly.\n";
        else
            cout<<n<<" things taken "<<m<<" at a time is "<<cal(n,m,1)<<" exactly.\n";
        mul=1;
    }

    return 0;
}
