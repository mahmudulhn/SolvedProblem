#include<iostream>
#include<bits/stdc++.h>
int cheak[1000];
using namespace std;

int main()
{
    int k,n,flag=0,x=0,y=0;
    cin>>k>>n;
    int seq[n];
    for(int i=0;i<n;i++)
    {
        cin>>seq[i];
        cheak[seq[i]]++;
    }
    if(n>k*(n/k))
        flag=n+1;
    else if(n<k*(n/k))
        flag=n-1;
    else
        flag=n;
    for(int i=1;i<=k;i++)
    {
        if(cheak[i]>(n/k)+1||cheak[i]<(n/k)-1)
        {
            cout<<"*\n";
            return 0;
        }
        if(cheak[i]>(flag/k))
            x=i;
        if(cheak[i]<(flag/k))
            y=i;
    }
    if(x==0&&y!=0)
        cout<<"+"<<y<<"\n";
    else if(y==0&&x!=0)
        cout<<"-"<<x<<"\n";
    else
        cout<<"-"<<x<<" +"<<y<<"\n";
    return 0;
}

