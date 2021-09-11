#include<bits/stdc++.h>
using namespace std;
//int a[]={2,4,6,8,10,12,14,16,32,64,128,256};
//map<string,int>mp;
void solve()
{
    int n;
    string s;
    while(cin>>n)
    {
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
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
