#include<bits/stdc++.h>
using namespace std;
//int a[]={2,4,6,8,10,12,14,16,32,64,128,256};
map<string,int>mp;
void solve()
{
    int n;
    while(cin>>n)
    {
        while(n--)
        {
            string s;
            cin>>s;
            if(mp[s]==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
            mp[s]++;
        }
        mp.clear();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

