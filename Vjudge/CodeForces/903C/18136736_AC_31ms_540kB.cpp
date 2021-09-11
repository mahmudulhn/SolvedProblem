#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    //int a[n];
    map<int,int>mp;
    map<int,int>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        mp[m]++;
    }

    //sort(a,a+n);
    int max=0;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>max)
            max=it->second;
    }
    cout<<max<<"\n";
}
