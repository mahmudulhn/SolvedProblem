#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int c;
    cin>>c;
    if(c==(sum-a[m])/2)
        cout<<"Bon Appetit\n";
    else
        cout<<a[m]/2<<"\n";
}
