#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,mid;
    cin>>n>>k;
    if(n%2==0)
        mid=n/2;
    else
        mid=(n/2)+1;
    if(k>mid)
        cout<<0+(2*(k-mid))<<"\n";
    else
        cout<<1+(2*(k-1))<<"\n";
}
