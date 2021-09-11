#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
map<int,int>::iterator it;
int main()
{
    int n,max=-10,mv=-10;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        mp[m]++;
        if(mp[m]>max||(mp[m]==max&&mv>m))
        {
            max=mp[m];
            mv=m;
        }
    }
    cout<<mv<<"\n";
}
