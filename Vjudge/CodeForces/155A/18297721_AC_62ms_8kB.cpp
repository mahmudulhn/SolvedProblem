#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j=0,i;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
        cin>>a[i];
    int b=a[1];
    int l=a[1];
    for(i=2;i<=n;i++)
    {
        if(a[i]>b)
        {
            b=a[i];
            j++;
        }
        if(a[i]<l)
        {
            l=a[i];
            j++;
        }
    }
    cout<<j<<"\n";
}

