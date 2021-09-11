#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int d,m,sum=0,count=0,j;
    cin>>d>>m;
    j=m;
    for(int i=0;i<=n-m;i++)
    {
        while(j--)
        {
            sum+=a[i];
            i++;
        }
        if(sum==d)
            count++;
        i=i-m;
        j=m;
        sum=0;
    }
    cout<<count<<"\n";
}
