#include<bits/stdc++.h>

using namespace std;

long long findDivisor(long long n)
{
    long long sum=0,a;
    a=sqrt(n);
    for(int i=1;i<=a;i++)
    {
        if(n%i==0)
        {
            sum+=i;
            if(((n/i)!=n)&&((n/i)!=i))
                sum+=(n/i);
        }
    }
    return sum;
}

int main()
{
    long long n,per;
    cout<<"PERFECTION OUTPUT\n";
    while(cin>>n)
    {
        if(n==0)
        {
            cout<<"END OF OUTPUT\n";
            return 0;
        }
        per=findDivisor(n);
        if(per==1&&n==1)
            cout<<"    "<<n<<"  DEFICIENT\n";
        else if(per==n)
        {
            if(n<10)
                cout<<"    "<<n<<"  PERFECT\n";
            else if(n<100)
                cout<<"   "<<n<<"  PERFECT\n";
            else if(n<1000)
                cout<<"  "<<n<<"  PERFECT\n";
            else if(n<10000)
                cout<<" "<<n<<"  PERFECT\n";
            else if(n<100000)
                cout<<n<<"  PERFECT\n";
        }
        else if(per<n)
        {
            if(n<10)
                cout<<"    "<<n<<"  DEFICIENT\n";
            else if(n<100)
                cout<<"   "<<n<<"  DEFICIENT\n";
            else if(n<1000)
                cout<<"  "<<n<<"  DEFICIENT\n";
            else if(n<10000)
                cout<<" "<<n<<"  DEFICIENT\n";
            else if(n<100000)
                cout<<n<<"  DEFICIENT\n";
        }
        else
        {
            if(n<10)
                cout<<"    "<<n<<"  ABUNDANT\n";
            else if(n<100)
                cout<<"   "<<n<<"  ABUNDANT\n";
            else if(n<1000)
                cout<<"  "<<n<<"  ABUNDANT\n";
            else if(n<10000)
                cout<<" "<<n<<"  ABUNDANT\n";
            else if(n<100000)
                cout<<n<<"  ABUNDANT\n";
        }
    }
    return 0;
}
