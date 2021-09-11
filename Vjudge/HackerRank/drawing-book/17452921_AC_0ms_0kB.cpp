#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,count=0,i;
    cin>>n>>p;
    if(n%2==0)
        n=n+1;
    if(p==1||p==n||(n%2==1&&p==n-1))
        count=0;
    else if(n/2==p)
    {
        i=1;
        //count=0;
        while(i<p)
        {
            count++;
            i=i+2;
           // cout<<count<<"\n";
        }
    }
    else if(n/2<p)
    {
        //count=0;
        i=n;
        while(i>p&&(i-1)>p)
        {
            count++;
            i=i-2;
           // cout<<count<<"\n";
        }
        //cout<<count<<"\n";
    }
    else if(n/2>p)
    {
        i=1;
        //count=0;
        while(i<p)
        {
            count++;
            i=i+2;
            //cout<<count<<"\n";
        }
       // cout<<count<<"\n";
    }
    cout<<count<<"\n";
}
