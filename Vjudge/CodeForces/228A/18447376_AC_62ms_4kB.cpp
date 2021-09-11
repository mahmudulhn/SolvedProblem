#include<bits/stdc++.h>
using namespace std;
//int a[]={2,4,6,8,10,12,14,16,32,64,128,256};
//map<string,int>mp;
void solve()
{
    int a[4];
    while(cin>>a[0]>>a[1]>>a[2]>>a[3])
    {
        set<char>se;
        for(int i=0;i<4;i++)
            se.insert(a[i]);
        cout<<4-se.size()<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}


