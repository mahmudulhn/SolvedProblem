#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,count=0,c=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i])
            c++;
    }

    for(i=k-1;i<n;i++)
    {
        if(a[i]>=a[k-1])
            count++;
    }
    if(c>=k)
        cout<<count+k-1<<endl;
    else
        cout<<c<<endl;
}
