#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    map<int,int>::iterator it;
    int n,x,i;
    cin>>n;
    while(n--)
    {
        cin>>x;
        mp[x]++;
    }
    x=0;
    for (auto& i: mp)
        x+=(i.second/2);
    cout<<x<<"\n";
}
