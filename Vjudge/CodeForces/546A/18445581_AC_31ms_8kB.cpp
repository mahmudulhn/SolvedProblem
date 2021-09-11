#include<bits/stdc++.h>
using namespace std;
//int a[]={2,4,6,8,10,12,14,16,32,64,128,256};
//map<string,int>mp;
void solve()
{
    int k,n,m;
    string s;
    while(cin>>k>>n>>m)
    {
        if((k*((m*(m+1))/2))<=n)
            cout<<0<<endl;
        else
            cout<<(k*((m*(m+1))/2))-n<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

