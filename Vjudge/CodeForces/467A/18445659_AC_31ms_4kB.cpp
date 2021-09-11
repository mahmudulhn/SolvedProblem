#include<bits/stdc++.h>
using namespace std;
//int a[]={2,4,6,8,10,12,14,16,32,64,128,256};
//map<string,int>mp;
void solve()
{
    int n;
    while(cin>>n)
    {
        int count=0;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(b-a>1)
                count++;
        }
        cout<<count<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

