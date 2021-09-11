#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e=0,o=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            e++;
        else
            o++;
    }
    //cout<<e<<" "<<o<<"\n";
    if(n%2==0)
    {
        if(e%2==0)
            cout<<e<<"\n";
        else
            cout<<o<<"\n";
    }
    else
    {
        if(o%2==0)
            cout<<e<<"\n";
        else
            cout<<o<<"\n";
    }

}
