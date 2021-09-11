#include<bits/stdc++.h>
using namespace std;
//int a[]={2,4,6,8,10,12,14,16,32,64,128,256};
//map<string,int>mp;
void solve()
{
    string s;
    while(cin>>s)
    {
        if(s[0]>='a'&&s[0]<='z')
            s[0]-=32;
        cout<<s<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}





