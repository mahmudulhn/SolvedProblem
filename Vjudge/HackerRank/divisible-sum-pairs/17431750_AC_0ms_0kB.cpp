#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0,count=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
            if(sum%k==0)
                count++;
        }
    }
    cout<<count<<"\n";
}
