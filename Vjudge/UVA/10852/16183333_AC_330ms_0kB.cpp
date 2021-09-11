#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int prime[100005];
void sieve(long long n)
{
    long long s,i,j;
    s=sqrt(n);
    prime[0]=1;
    prime[1]=1;
    for(i=2;i<=s;i++)
    {
        if(prime[i]==0)
        {
            for(j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
}
int main()
{
    int n,test,i,j,max=0,a;
    sieve(100000);
    cin>>test;
    while(test--)
    {
        max=0;
        cin>>n;
        for(i=1,j=n;i<=n;i++)
        {
            for(j=n;j>0;j--)
            {
                if(prime[i]==0&&i*j<=n&&i*(j+1)>n&&max<n-(i*j))
                {
                    max=n-i*j;
                    a=i;
                }
            }
        }
        cout<<a<<"\n";
    }
    return 0;
}

