#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

long long x,y,c;
void egcd(long long a,long long b)
{
    if(b==0)
    {
        c=a;
        x=1;
        y=0;
        return;
    }
    egcd(b,a%b);
    long long temp=x;
    x=y;
    y=temp-(a/b)*y;
}
int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        egcd(a,b);
        cout<<x<<" "<<y<<" "<<c<<"\n";
    }
    return 0;
}
