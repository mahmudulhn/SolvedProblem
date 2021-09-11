#include<bits/stdc++.h>

using namespace std;
unsigned long long pisano[10000];
//unsigned long long getFibonacci(unsigned long long n, unsigned long long mod)
//{
//    if(n==0)
//        return 1;
//    if(n==1)
//        return 1;
//    return (getFibonacci(n-1,mod)%mod+(getFibonacci(n-2,mod)%mod))%mod;
//}

unsigned long long power(unsigned long long a,unsigned long long b,unsigned long long n)
{
    if(b==0)
        return 1;
    if(b%2==0)
    {
        unsigned long long temp=(power(a%n,b/2,n)%n);
        return (temp*temp)%n;
    }
    return ((a%n)*power(a%n,b-1,n)%n)%n;
}
unsigned long long getPisanoCycle(unsigned long long mod)
{
    pisano[0]=0;
    pisano[1]=1;
    unsigned long long i=2,length=0;
    while(1)
    {
        pisano[i]=(pisano[i-1]+pisano[i-2])%mod;
        i++;
        if(pisano[i-1]==1&&pisano[i-2]==0)
            break;
    }
    return i-2;
}

int main()
{
    unsigned long long a,b,n,test;
    cin>>test;
C:  while(test--)
    {
        cin>>a>>b>>n;
        if(n==1)
        {
            cout<<0<<"\n";
            goto C;
        }
        unsigned long long cycle=getPisanoCycle(n);
        unsigned long long temp=power(a%cycle,b,cycle);
        cout<<pisano[temp]<<"\n";
    }
    return 0;
}
