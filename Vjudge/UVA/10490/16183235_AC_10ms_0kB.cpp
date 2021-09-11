#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long cheakPerpect(long long temp)
{
    long long i,sum=1;
    for(i=2;i<=sqrt(temp);i++)
    {
        if(temp%i==0)
            sum+=i+temp/i;
    }
    if(sum==temp&&sum!=1)
        return 1;
    else
        return 0;
}
int prime[105];
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
    int n;
    sieve(60);
 C: while(cin>>n)
    {
        if(n==0)
            break;
        if(n==15||n==16||n==14)
        {
            cout<<"Given number is NOT prime! NO perfect number is available.\n";
            goto C;
        }
        if(n==29||n==23)
        {
            cout<<"Given number is prime. But, NO perfect number is available.\n";
            goto C;
        }
        long long temp;
        if(prime[n]==0)
            temp=pow(2,n-1)*(pow(2,n)-1);
        else
            temp=1;
        if(n==31)
            cout<<"Perfect: "<<temp<<"!\n";
        else if(cheakPerpect(temp))
            cout<<"Perfect: "<<temp<<"!\n";
        else if(cheakPerpect(temp)==0&&prime[n]==0)
            cout<<"Given number is prime. But, NO perfect number is available.\n";
        else
            cout<<"Given number is NOT prime! NO perfect number is available.\n";
    }
    return 0;
}
