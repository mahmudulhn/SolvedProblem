#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,count=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]==a[n-1])
            count++;
    }
    cout<<count<<"\n";
}
