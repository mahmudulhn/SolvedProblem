#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test,n,zero;
    cin>>test;
    while(test--)
    {
        cin>>n;
        long long m=5,t=5,sum=0;
        while(m<=n)
        {
            sum+=(n/m);
            m*=t;
        }
        cout<<sum<<"\n";
    }
}
