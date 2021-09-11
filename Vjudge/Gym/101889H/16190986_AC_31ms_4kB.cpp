#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[5],b[5],i,j,sum=0;
    for(i=0;i<3;i++)
        cin>>a[i];
    for(i=0;i<3;i++)
        cin>>b[i];
    for(i=0;i<3;i++)
    {
        if(a[i]<b[i])
            sum+=b[i]-a[i];
    }
    cout<<sum<<"\n";
    return 0;
}
